#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    int n;
    cin >> n;
    if(n == 0){
        cout << 1 << endl;
        return 0;
    }
    vector<ll> v = {1, 2, 5, 10};
    
    ll a[] = {1, 2, 5, 10};
    for(int i=0; i<n; i++){
        int lim = v.size();
        for(int j=0; j<lim; j++){
            for(int k=0; k<4; k++) v.push_back(v[j] * a[k]);
        }
        sort(v.begin(), v.end());
        v.erase(unique(v.begin(), v.end()), v.end());
    }
    
    for(ll x: v) cout << x << endl;
    return 0;
}