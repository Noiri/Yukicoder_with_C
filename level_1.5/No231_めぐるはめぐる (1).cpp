#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n, g, d, need;
    need = 30000 * 100;
    cin >> n;
    int ans = -1;
    for(int i=0; i<n; i++){
        cin >> g >> d;
        if(need <= 6 * (g - 30000*d)) ans = i+1;
    }
    if(ans == -1) cout << "NO" << endl;
    else {
        cout << "YES" << endl;
        for(int i=0; i<6; i++) cout << ans << endl;
    }

    return 0;
}