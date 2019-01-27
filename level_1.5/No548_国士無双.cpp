#include <bits/stdc++.h>
using namespace std;

int a[999];

int main(){
    string s;
    cin >> s;
    for(int x: s) a[x]++;
    int two = 0, one = 0, ans = 0;
    for(int i='a'; i<='m'; i++){
        if(a[i] == 2) two++;
        if(a[i] == 0) ans = i;
        if(a[i] == 1) one++;
    }
    if(two == 1 && one == 11) cout << (char)(ans) << endl;
    else if(one == 13){
        for(char i='a'; i<='m'; i++) cout << i << endl;
    }
    else cout << "Impossible" << endl;
    return 0;
}