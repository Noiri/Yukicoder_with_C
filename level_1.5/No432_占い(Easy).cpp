#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    for(int i=0; i<n; i++){
        string s;
        cin >> s;
        while((int)s.size() != 1){
            string tmp = "";
            for(int j=0; j<s.size()-1; j++){
                int res = (int)(s[j] - '0') + (int)(s[j+1] - '0');
                res = res%10 + res/10;
                tmp += to_string(res);
            }
            s = tmp;
        }
        cout << s << endl;
    }
    return 0;
}