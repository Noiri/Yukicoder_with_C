#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    if(n == 0){
        cout << "0" << endl;
        return 0;
    }
    string ans = "";
    while(n > 0){
        ans += to_string(n%7);
        n /= 7;
    }
    reverse(ans.begin(), ans.end());
    cout << ans << endl;
    return 0;
}