#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    map<char, int> mp;
    for(char c: s){
        mp[c]++;
        if(mp[c] == 2){
            printf("NO\n");
            return 0;
        }
    }
    printf("YES\n");
    return 0;
}