#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    map<string, int> mp;
    for(int i=0; i<n; i++){
        string s;
        cin >> s;
        if(mp[s] == 0) mp[s] = 1;
        else mp[s]++;
    }

    string used;
    for(auto& p: mp){
        if(p.second != 0) used = p.first;
        for(auto& q: mp){
            if(q.first != used && q.second > 0){
                q.second--;
                used = q.first;
            }
        }
    }
    for(int i=0; i<n; i++){
        for(auto& p: mp){
            if(p.second != 0) used = p.first;
            for(auto& q: mp){
                if(q.first != used && q.second > 0){
                    q.second--;
                    used = q.first;
                }
            }
        }
    }

    bool allzero = true;
    for(auto p: mp) if(p.second != 0) allzero = false;
    if(allzero) printf("YES\n");
    else printf("NO\n");
    return 0;
}