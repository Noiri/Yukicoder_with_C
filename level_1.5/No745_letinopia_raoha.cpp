#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if(d >= 10){
        printf("Impossible\n");
        return 0;
    }
    int rate = 0;
    ll ans = 0;
    for(int i=1; i<=a+b; i++){
        if(i%100 == 1) rate = pow(2, i/100);
        if(i <= b) ans += (ll)(50*rate);
        else if(b < i) ans += (ll)(100*rate);
    }
    printf("Possible\n");
    printf("%lld\n", ans);
    return 0;
}