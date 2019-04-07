#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll MOD = 1000000007;

int main(){
    int n;
    cin >> n;
    ll ans = 0;
    for(int i=0; i<n; i++){
        ll c, d;
        cin >> c >> d;
        if(c%2 == 0) c--;
        ans += ((c/2+1) % MOD)  * (d % MOD);
        ans %= MOD;
    }
    cout << ans%MOD << endl;
    return 0;
}