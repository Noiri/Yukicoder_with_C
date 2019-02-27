#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for(int i=0; i<n; i++){
        int a;
        cin >> v[i];
    }
    long long ans = 0;

    for(int bit=0; bit<(1 << n); bit++){
        long long tmp = 0;
        for(int i=0; i<n; i++){
            if(bit & (1<<i)){
                tmp += v[i];
            }
        }
        if(tmp <= k) ans = max(ans, tmp);
    }

    cout << ans << endl;
    return 0;
}