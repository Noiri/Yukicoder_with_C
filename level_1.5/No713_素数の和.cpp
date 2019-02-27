#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int ans = 0;
    int S = 0;
    for(int i=2; i<=n; i++){
        bool isPrime = true;
        for(int j=2; j<=sqrt(i); j++){
            if(i%j == 0) isPrime = false;
        }
        if(isPrime == true) S += i;
    }
    cout << S << endl;
    return 0;
}