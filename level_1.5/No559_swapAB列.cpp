#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    int ans = 0, head = 0;
    for(int i=0; i<s.size(); i++){
        if(s[i] == 'A'){
            ans += (i - head);
            head++;
        }
    }
    cout << ans << endl;
    return 0;
}