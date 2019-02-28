#include <bits/stdc++.h>
using namespace std;

int main(){
    double r, d;
    cin >> r >> d;
    double ans = pow(d, 2) - pow(r, 2);
    ans = sqrt(ans);
    cout << setprecision(16) << ans << endl;
    return 0;
}