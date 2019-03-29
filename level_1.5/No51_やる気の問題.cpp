#include <bits/stdc++.h>
using namespace std;

int main(){
    double w, d;
    cin >> w >> d;
    for(int i=d; i>1; i--) w -= floor(w/i/i);
    cout << w << endl;
    return 0;
}