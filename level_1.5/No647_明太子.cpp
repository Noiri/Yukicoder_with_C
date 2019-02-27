#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    for(int i=0; i<n; i++) cin >> a[i] >> b[i];

    int m;
    cin >> m;
    vector<int> ans(m);

    for(int i=0; i<m; i++){
        int x, y;
        cin >> x >> y;
        for(int j=0; j<n; j++){
            if(a[j] >= x && b[j] <= y) ans[i]++;
        }
    }

    int max_n = *max_element(ans.begin(), ans.end());
    if(max_n == 0){
        cout << 0 << endl;
        return 0;
    }
    
    for(int i=0; i<m; i++){
        if(ans[i] == max_n) cout << i+1 << endl;
    }

    return 0;
}