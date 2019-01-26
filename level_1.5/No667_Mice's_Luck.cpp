#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    int ok = 0;
    for(int i=0; i<s.size(); i++) ok += (s[i] == 'o');
    
    double n = s.size();
    for(int i=0; i<s.size(); i++){
        double ans = ok / n;
        cout << setprecision(25) << (double)(ans * 100) << endl;
        if(s[i] == 'o') ok--;
        n--;
    }
    return 0;
}