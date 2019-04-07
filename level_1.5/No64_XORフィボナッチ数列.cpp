#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

//解説AC: 周期性を利用する（数列の生成で計算量が間に合わなそうなときは周期性を疑って書き出すべき）

int main(){
    ll f0, f1, n;
    cin >> f0 >> f1 >> n;
    ll f2 = f0 ^ f1;
    if(n%3 == 0) cout << f0 << endl;
    else if(n%3 == 1) cout << f1 << endl;
    else if(n%3 == 2) cout << f2 << endl;
    return 0;
}