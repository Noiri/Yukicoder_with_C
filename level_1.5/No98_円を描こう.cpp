#include <bits/stdc++.h>
using namespace std;

int main(){
    double x, y;
    cin >> x >> y;
    int Md = ceil(2*sqrt(x*x + y*y));
    int md = floor(2*sqrt(x*x + y*y));
    cout << Md + (Md == md) << endl;
    return 0;
}