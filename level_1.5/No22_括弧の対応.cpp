#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    vector<pair<char, int>> v(n);
    for(int i=0; i<n; i++){
        v[i].first = s[i];
        v[i].second = i+1;
    }
    int ans = 0;
    while(true){
        for(int i=0; i<v.size()-1; i++){
            if(v[i].first == '(' && v[i+1].first == ')'){
                if(v[i].second == k){
                        cout << v[i+1].second << endl;
                        return 0;
                    }
                else if(v[i+1].second == k){
                        cout << v[i].second << endl;
                        return 0;
                    }
                if(v.size() > 2){
                    v.erase(v.begin()+i);
                    v.erase(v.begin()+i);
                }
            }
        }
    }
}