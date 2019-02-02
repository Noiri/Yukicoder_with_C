#include <bits/stdc++.h>
using namespace std;

int n;
int ans[31][31];

int x, y, d;
int dx[4] = {0, 1, 0, -1};
int dy[4] = {-1,0, 1, 0};
void next(){
    int xx = x + dx[d];
    int yy = y + dy[d];

    if(xx < 0 || n <= xx){
        d = (d+1)%4;
        xx = x + dx[d];
        yy = y + dy[d];
    }
    else if(yy < 0 || n <= yy){
        d = (d+1)%4;
        xx = x + dx[d];
        yy = y + dy[d];
    }
    else if(ans[yy][xx] != 0){
        d = (d+1)%4;
        xx = x + dx[d];
        yy = y + dy[d];
    }
    x = xx;
    y = yy;
}

int main(){
    cin >> n;
    int idx = 1;
    for(int i=0; i<n*n; i++){
        ans[y][x] = idx;
        idx++;
        next();
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(j == n-1) printf("%03d\n", ans[i][j]);
            else printf("%03d ", ans[i][j]);
        }
    }
    return 0;
}