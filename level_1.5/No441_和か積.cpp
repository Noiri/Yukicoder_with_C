#include <bits/stdc++.h>
using namespace std;

int main(){
    string a, b;
    cin >> a >> b;
    if(a == "0" && b == "0") cout << "E" << endl;
    else if(a == "0" || b == "0") cout << "S" << endl;
    else if(a == "1" || b == "1") cout << "S" << endl;
    else if(a == "2" && b == "2") cout << "E" << endl;
    else cout << "P" << endl;
    return 0;
}