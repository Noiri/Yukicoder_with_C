#include <bits/stdc++.h>
using namespace std;

int main(){
    string r, g, b;
    cin >> r >> g >> b;
    int R = 0, G = 0, B = 0;
    for(int i=0; i<r.size(); i++) R += (r[i] != ',');
    for(int i=0; i<g.size(); i++) G += (g[i] != ',');
    for(int i=0; i<b.size(); i++) B += (b[i] != ',');

    R = 16 - R;
    G = 16 - G;
    B = 16 - B;

    if(r == "NONE") R = 16;
    if(g == "NONE") G = 16;
    if(b == "NONE") B = 16;

    int ans = R*R * G*G * B*B;
    cout << ans << endl;
    return 0;
}