#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    map<string, int> m;
    for(int i=0; i<n; i++){
        int img, num, point;
        cin >> img >> num >> point;
        for(int i=0; i<num; i++){
            string s;
            cin >> s;
            m[s] += point;
        }
    }

    vector<pair<int, string>> v;
    for(auto p :m) v.push_back(make_pair(-p.second, p.first));
    sort(v.rbegin(), v.rend());
    int loop = min(10, (int)v.size());
    for(int i=0; i<loop; i++) cout << v[v.size()-i-1].second << " " << abs(v[v.size()-i-1].first) << endl;
    return 0;
}