#include <bits/stdc++.h>
using namespace std;

//insertを使うときは、事前にメモリを確保しないほうが良い

int main(){
    int n, m;
    cin >> n >> m;
    vector<int> v;
    int num = 1;
    for(int i=1; i<=n; i++) v.push_back(i);

    for(int i=0; i<m; i++){
        int a;
        cin >> a;
        int top = v[a-1];
        v.insert(v.begin(), top);
        v.erase(v.begin() + a);
    }
    cout << v[0] << endl;
    return 0;
}