#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, k;
    string s;
    cin >> n >> k >> s;

    vector<int> v(n);
    stack<int> st;

    for(int i=0; i<n; i++){
        if(s[i] == '(') st.push(i);
        else{
            int ind = st.top();
            st.pop();
            v[ind] = i;
            v[i] = ind;
        }
    }
    cout << v[k-1]+1 << endl;
    return 0;
}