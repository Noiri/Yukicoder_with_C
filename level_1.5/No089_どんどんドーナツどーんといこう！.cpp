#include <bits/stdc++.h>
using namespace std;

int main(){
    double c, r, R;
    cin >> c >> r >> R;
    //pi * r^2
    double A = M_PI * (R-r)*(R-r) * 0.25;
    double D = 2 * (r + (R-r) * 0.5) * M_PI;
    cout << setprecision(25) << (double)(A*D)*c << endl;
    return 0;
}