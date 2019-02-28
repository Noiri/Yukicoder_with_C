#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    if(s[0] != '1' || s == "1"){
        cout << -1 << endl;
        return 0;
    }

    bool flag = true;
    for(int i=1; i<s.size(); i++){
        if(s[i] != '3') flag = false;
    }
    if(flag) cout << s.size() - 1 << endl;
    else cout << -1 << endl;
}