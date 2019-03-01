#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    bool isTop = true;
    bool isBottom = true;
    string ans = "A=";
    int loop = pow(2, n);

    bool existPre = false;
    for(int i=0; i<loop; i++){
        vector<int> v(n+1);
        for(int j=0; j<=n; j++){
            cin >> v[j];
        }
        if(v[n] == 1){
            isBottom = false;
            if(existPre) ans += "∨";
            existPre = true;
            ans += "(";
            for(int j=0; j<n; j++){
                if(v[j] == 1) ans += ("P_" + to_string(j+1));
                else if(v[j] == 0) ans += ("¬P_" + to_string(j+1));
                if(j != n-1) ans += "∧";
            }
            ans += ")";
        }
        else isTop = false;
    }
    if(isTop) cout << "A=⊤" << endl;
    else if(isBottom) cout << "A=⊥" << endl;
    else cout << ans << endl;

    return 0;
}