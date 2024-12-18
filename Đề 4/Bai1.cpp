#include <bits/stdc++.h>

using namespace std;

int m,n;
const int MAX = 1005;
int a[MAX][MAX];

int dx[4] = {0, -1, 0, 1};
int dy[4] = {1, 0, -1, 0};
int dfs(int x, int y) {
    int tmp=1;
    for (int k = 0; k < 4; k++) {
        int nx = x + dx[k];
        int ny = y + dy[k];
        if (nx >= 0 && nx < m && ny >= 0 && ny < n && a[nx][ny] > a[x][y]) {
            tmp=max(tmp,dfs(nx,ny)+1);
        }
    }
    return tmp;
}

int main(){
    cin>>m>>n;
    int dain=0;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }
    if(m==0||n==0){
        cout<<0<<endl;
        return 0;
    }
    if(m==1&&n==1){
        cout<<1<<endl;
        return 0;
    }
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            dain=max(dain,dfs(i,j));
        }
    }
    cout<<dain<<endl;
    return 0;
}