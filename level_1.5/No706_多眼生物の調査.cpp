#include <bits/stdc++.h>
using namespace std;

int a[1001];

int main(){
    int n;
    cin >> n;
    int cnt = 0;
    for(int i=0; i<n; i++){
        string s;
        cin >> s;
        a[s.size()-2]++;
        cnt = max(cnt, a[s.size()-2]);
    }
    for(int i=1000; i>=0; i--){
        if(a[i] == cnt){
            cout << i << endl;
            return 0;
        }
    }
}