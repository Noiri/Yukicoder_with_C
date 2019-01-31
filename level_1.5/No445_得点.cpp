#include <bits/stdc++.h>
using namespace std;

int main(){
    int a, b;
    cin >> a >> b;
    int first_term = 50*a;
    int second_term = (250*a) / (4+b);
    cout << first_term + second_term << endl;
    return 0;
}