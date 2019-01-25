#include <bits/stdc++.h>
using namespace std;

int a[2001];

int main(){
    int n;
    cin >> n;

    for(int i=0; i<n; i++) cin >> a[i];
    for(int i=1; i<2*n-3; i++){
        for(int p=0; p<=n-1; p++){
            int q = i - p;
            if(0 <= q && q <= n-1 && a[p] < a[q]) swap(a[p], a[q]);
        }
    }
    for(int i=0; i<n; i++){
        if(i == n-1) cout << a[i] << endl;
        else cout << a[i] << " ";
    }
    return 0;
}