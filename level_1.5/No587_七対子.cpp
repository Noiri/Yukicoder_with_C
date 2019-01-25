#include <bits/stdc++.h>
using namespace std;

int alpha[26];

int main(){
    string s;
    cin >> s;
    for(int i=0; i<s.size(); i++){
        int n = s[i] - 'a';
        alpha[n]++;
    }
    int cnt = 0;
    int flag = -1;
    for(int i=0; i<26; i++){
        cnt += (alpha[i] == 2);
        if(alpha[i] == 1) flag = i;
    }
    char ans = 'a' + flag;
    if(cnt == 6 && flag != -1) cout << ans << endl;
    else cout << "Impossible" << endl;
    return 0;
}