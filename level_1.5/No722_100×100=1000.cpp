#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    ll a, b;
    cin >> a >> b;
    ll ans = 0;

    string s = to_string(abs(a));
    string t = to_string(abs(b));

    ll A = pow(10, s.size()-1);
    ll B = pow(10, t.size()-1);

    if(s.size() > 2 && t.size() > 2 && abs(a)%A  == 0 && abs(b)%B == 0){
        ans = a * b;
        if(abs(ans) % 10 == 0) cout << ans/10 << endl;
        else cout << ans << endl;
    }
    else{
        ans = a * b;
        string res = to_string(abs(ans));
        if(res.size() >= 9) cout << "E" << endl;
        else cout << ans << endl;
    }

    return 0;
}