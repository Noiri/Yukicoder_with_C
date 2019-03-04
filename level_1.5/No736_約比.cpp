#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll gcd(ll x, ll y){
    if(x%y == 0) return y;
    return gcd(y, x%y);
}

int main(){
    int n;
    cin >> n;
    ll ans = 0;
    vector<ll> v(n);
    for(int i=0; i<n; i++){
        cin >> v[i];
        ans = gcd(ans, v[i]);
    }
    for(int i=0; i<n; i++){
        cout << ll(v[i]/ans);
        if(i != n-1) cout << ":";
    }
    cout << endl;
    return 0;
}