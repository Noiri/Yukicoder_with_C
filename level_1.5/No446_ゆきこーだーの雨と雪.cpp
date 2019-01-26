#include <bits/stdc++.h>
using namespace std;

int main(){
    string a, b;
    cin >> a >> b;
    bool flag = true;
    if(a.size() > 1 && a[0] == '0') flag = false;
    if(b.size() > 1 && b[0] == '0') flag = false;

    for(int i=0; i<a.size(); i++){
        if(isalpha(a[i])) flag = false;
    }
    for(int i=0; i<b.size(); i++){
        if(isalpha(b[i])) flag = false;
    }
    if(flag){
        int A = stoi(a), B = stoi(b);
        flag = (A <= 12345 && B <= 12345);
    }

    if(flag) cout << "OK" << endl;
    else cout << "NG" << endl;
    return 0;
}