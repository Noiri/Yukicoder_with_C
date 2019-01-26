#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    double g, v;
    cin >> g >> v;
    n /= 5;
    cout <<  setprecision(25) << (double)(n * g / v) << endl;
    return 0;
}