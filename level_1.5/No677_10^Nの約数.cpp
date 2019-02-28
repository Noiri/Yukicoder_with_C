#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    ll n;
    cin >> n;
    vector<ll> ans;
    for(int i=0; i<=n; i++){
        for(int j=0; j<=n; j++){
            ll tmp = pow(2, i) * pow(5, j);
            ans.push_back(tmp);
        }
    }
    sort(ans.begin(), ans.end());
    ans.erase(unique(ans.begin(), ans.end()), ans.end());
    for(auto x: ans) cout << x << endl;
    return 0;
}