#include <bits/stdc++.h>
using namespace std;

int main(){
    string sa, pa, xa;
    string sb, pb, xb;
    cin >> sa >> pa >> xa;
    cin >> sb >> pb >> xb;
    if(pa.size() < pb.size()) cout << sb << endl;
    else if(pb.size() < pa.size()) cout << sa << endl;
    else if(pa > pb) cout << sa << endl;
    else if(pa < pb) cout << sb << endl;
    else cout << -1 << endl;
    return 0;
}