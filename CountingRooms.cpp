#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>
using namespace std;
vector<int> dx = {-1,1,0,0};
vector<int> dy = {0,0,-1,1};
void dfs(int i, int j, int n, int m, vector<vector<char>> grid, vector<vector<bool>>& vis) {
    stack<pair<int,int>> s;
    s.push({i,j});
    vis[i][j] = true;
    while (!s.empty()) {
    int x = s.top().first;
    int y = s.top().second;
    s.pop();
    for (int d = 0; d < 4; d++) {
        int ni = x + dx[d];
        int nj = y + dy[d];
        if (ni >= 0 && nj >= 0 && ni < n && nj < m && !vis[ni][nj] && grid[ni][nj] == '.') {
            vis[ni][nj] = true;
            s.push({ni,nj});
        }
    }
}
}
int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<char>> grid(n, vector<char>(m));
    vector<vector<bool>> vis(n,vector<bool>(m,false));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> grid[i][j];
        }
    }
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
        if (!vis[i][j] && grid[i][j] == '.') {
            dfs(i,j,n,m,grid,vis);
            cnt++;
        }
    }
    }
    cout << cnt << "\n";
}