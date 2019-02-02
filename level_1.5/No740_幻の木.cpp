#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m, p, q;
    cin >> n >> m >> p >> q;
    int ans = 0;
    int month = 1;
    while(n > 0){
        ans++;
        if(p <= month && month < p+q) n -= 2*m;
        else n -= m;
        month++;
        if(month == 13) month = 1;
    }
    cout << ans << endl;
    return 0;
}