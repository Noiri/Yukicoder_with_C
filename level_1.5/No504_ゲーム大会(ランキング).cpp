#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, k;
    cin >> n >> k;
    int rank = 1;
    cout << rank << endl;
    for(int i=0; i<n-1; i++){
        int point;
        cin >> point;
        if(k < point) rank++;
        cout << rank << endl;
    }
    return 0;
}