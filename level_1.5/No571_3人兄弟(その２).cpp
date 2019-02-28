#include <bits/stdc++.h>
using namespace std;

struct bros{
    int h;
    int w;
    char name;

    bool operator<(const bros &another) const {
        if(h != another.h) return h > another.h;
        return w < another.w;
    }
};

int main(){
    vector<bros> v(3);
    for(int i=0; i<3; i++){
        cin >> v[i].h >> v[i].w;
        v[i].name = char('A' + i);
    }

    sort(v.begin(), v.end());

    for(auto st: v) cout << st.name << endl;
    return 0;
}