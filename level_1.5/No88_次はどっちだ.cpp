#include <bits/stdc++.h>
using namespace std;

int main(){
    string player;
    cin >> player;
    int cnt = 0;
    for(int i=0; i<8; i++){
        string s;
        cin >> s;
        for(auto c: s) cnt += (c == '.');
    }
    if(cnt%2 == 0) cout << player << endl;
    else{
        if(player == "oda") cout << "yukiko" << endl;
        else cout << "oda" << endl;
    }
    return 0;
}