#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    ll a, b, c;
    cin >> a >> b >> c;
    a *= 60;
    c *= 3600;
    if(a < b){
        printf("-1\n");
        return 0;
    }
    ll ans = c/(a-b) + (c%(a-b) != 0);
    printf("%lld\n", ans);
    return 0;
}