#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    int ans = 0;
    for(int i=0; i<s.size()-2; i++){
        int res = 1e6;
        if(s[i] == 'c' && s[i+1] == 'c' && s[i+2] == 'w'){
            int forword = i+1;
            int backword = s.size()-i-2;
            res = min({res, forword, backword});
        }
        if(res != 1e6) ans += res;
    }
    cout << ans << endl;
    return 0;
}.