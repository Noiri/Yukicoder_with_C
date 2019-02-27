#include <bits/stdc++.h>
using namespace std;

int main(){
    int a, b, c;
    cin >> a >> b >> c;

    if(a == b || a == c || b == c) {
        cout << 0 << endl;
        return 0;
    }
    else if(min({a, b, c}) == b){
        cout << "INF" << endl;
        return 0;
    }
    else if(max({a, b, c}) == b){
        cout << "INF" << endl;
        return 0;
    }
    else{
        int ans = 0;
        for(int i=1; i<=max({a, b, c}); i++){
            int A = a%i, B = b%i, C = c%i;
            if(A < B && C < B && A != B && A != C && B != C) ans++;
            else if(A > B && C > B && A != B && A != C && B != C) ans++;
        }
        cout << ans << endl;
    }
    return 0;
}