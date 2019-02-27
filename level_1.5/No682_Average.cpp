#include <bits/stdc++.h>
using namespace std;

int main(){
    int a, b;
    cin >> a >> b;
    int ans = 0;
    for(int i=a; i<=b; i++){
        int s = a + b + i;
        ans += ((a + b + i) % 3 == 0);
    }
    cout << ans << endl;
    return 0;
}