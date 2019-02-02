#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    if(n%2 == 0){
        if(n/2<=m && m<n) cout << 2 << endl;
        else if(n<=m) cout << 1 << endl;
        else cout << -1 << endl;
    }
    else{
        if(n<=m) cout << 1 << endl;
        else cout << -1 << endl;
    }
    return 0;
}