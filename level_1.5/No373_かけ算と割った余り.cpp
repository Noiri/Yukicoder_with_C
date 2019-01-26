#include <bits/stdc++.h>
using namespace std;

int main(){
    long long a, b, c, d;
    cin >> a >> b >> c >> d;
    long long ans = a %= d;
    ans *= b;
    ans %= d;
    ans *= c;
    cout << ans%d << endl;
    return 0;
}