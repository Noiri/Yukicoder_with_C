#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int ans = 0;
    int bisket = 1;
    while(n >= bisket){
        bisket *= 2;
        ans += 1;
    }
    ans--;
    n -= bisket/2;

    if(n == 0){
        cout << ans << endl;
        return 0;
    }

    cout << ans+1 << endl;
    return 0;
}