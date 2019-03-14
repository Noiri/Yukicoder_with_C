#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int odd = 0, even = 0;
    for(int i=0; i<n; i++){
        int x;
        cin >> x;
        x = abs(x);
        odd += (x%2);
        even += ((x+1)%2);
    }
    cout << n - 2*min(odd, even) << endl;
    return 0;
}