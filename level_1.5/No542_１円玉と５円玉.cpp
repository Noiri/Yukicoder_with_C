#include <bits/stdc++.h>
using namespace std;

int main(){
    int a, b;
    cin >> a >> b;
    set<int> st;
    for(int i=0; i<=a; i++){
        for(int j=0; j<=b; j++){
            st.insert(i + 5*j);
        }
    }
    for(int x: st){
        if(x != 0) cout << x << endl;
    }
    return 0;
}