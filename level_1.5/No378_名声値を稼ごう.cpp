#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    cin >> n;
    long long ans = 0, sum = 0;
    vector<long long> v;
    while(n>0){
        v.push_back(sum+n*2);
        sum += n;
        n /= 2;
    }
    v.push_back(sum);
    sort(v.begin(), v.end()); 
    cout << (long long)(v[v.size()-1] - v[0]) << endl;
    return 0;
}