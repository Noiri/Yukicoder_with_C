#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> v(n+1);
    for(int i=0; i<n; i++){
        int num;
        cin >> num;
        v[num]++;
    }

    int ans = 0;

    for(int i=1; i<=n; i++){
        if(v[i] > 1){
            for(int j=1; j<=n; j++){
                if(v[j] == 0){
                    v[j]++;
                    v[i]--;
                    ans += abs(j - i);
                    i = 0;
                    break;
                }
            }
        }
    }

    cout << ans << endl;

    return 0;


}