#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    ll h, w, n, k;
    cin >> h >> w >> n >> k;
    ll last = h*w % n;
    if(last == 0) last = n;
    if(last == k) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}