#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    ll n, m;
    cin >> n >> m;
    if(n == 1){
        cout << 0 << endl;
        return 0;
    }
    else if (n == 2){
        cout << 1 << endl;
        return 0;
    }

    ll a = 0, b = 1, c = 0;
    for(int i=3; i<=n; i++){
        c = (a + b) % m;
        a = b;
        b = c;
    }
    cout << c << endl;
    return 0;
}