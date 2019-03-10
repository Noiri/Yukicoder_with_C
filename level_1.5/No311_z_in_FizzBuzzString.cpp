#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    ll n;
    cin >> n;
    ll ans = 0;
    ll three = n / 3, five = n / 5;
    ans = (three - n/15)*2 + (five - n/15)*2 + n/15*4;
    cout << ans << endl;
    return 0;
}