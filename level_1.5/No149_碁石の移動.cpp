#include<bits/stdc++.h>
using namespace std;

int main(){
    int aw, ab, bw, bb, c, d;
    cin >> aw >> ab >> bw >> bb >> c >> d;

    if(ab < c){
        aw -= (c - ab);
        bw += (c - ab);
    }

    if(bw > d) aw += d;
    else aw += bw;

    cout << aw << endl;
    
    return 0;
}