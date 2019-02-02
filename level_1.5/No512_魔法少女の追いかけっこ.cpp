#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll a[81];

int main(){
    ll x, y, n;
    cin >> x >> y >> n;
    for(int i=0; i<n; i++) cin >> a[i];
    for(int i=0; i<n-1; i++){
        if((ll)(x*a[i+1]) < (ll)(y*a[i])){
            printf("NO\n");
            return 0;
        }
    }
    printf("YES\n");
    return 0;
}