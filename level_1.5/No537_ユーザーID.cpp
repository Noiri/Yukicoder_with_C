#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    set<string> st;
    ll n;
    cin >> n;
    for(ll i=1; i<=sqrt(n)+1; i++){
        if(n%i == 0){
            string f = to_string(i), s = to_string(n/i);
            st.insert(f+s);
            st.insert(s+f);
        }
    }
    cout << st.size() << endl;
    return 0;
}