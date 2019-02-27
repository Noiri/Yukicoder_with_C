#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    string s, t;
    cin >> s >> t;
    int a = 0;
    for(char x: s){
        a += (x == 'A');
    }
    int b = 0;
    for(char x: t){
        b += (x == 'A');
    }
    int ans = min(a, b);
    ans += min((s.size() - a), t.size() - b);
    cout << ans << endl;
    return 0;
}