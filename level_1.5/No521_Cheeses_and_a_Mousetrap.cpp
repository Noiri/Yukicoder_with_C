#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, k;
    cin >> n >> k;
    if(k == 0 || n < k) cout << 0 << endl;
    else if(n%2 == 0){
        cout << n-2 << endl;
    }
    else if(n%2 == 1){
        if(n/2+1 == k) cout << n-1 << endl;
        else cout << n-2 << endl;
    }
    return 0;
}