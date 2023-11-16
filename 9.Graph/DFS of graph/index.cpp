#include <iostream>
#include <vector>

using namespace std;

// Input
//  9 9
//  1 2
//  1 3
//  1 5
//  2 4
//  3 6
//  3 7
//  3 9
//  5 8
//  8 9

int n, m;
vector<int> adj[1001];
bool visited[1001];

void inp()
{
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        int x, y;
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    memset(visited, false, sizeof(visited));
}

void dfs(int u)
{
    cout << u << " ";
    visited[u] = true;
    for (int v : adj[u])
    {
        if (!visited[v])
        {
            dfs(v);
        }
    }
}

int main()
{
    inp();
    dfs(1);
    return 0;
}

// https://www.youtube.com/watch?v=JAlNXyfe-p4&list=PLux-_phi0Rz3Kx5SPqIRyGR1gDVb5DY1x&index=3
// Thuật Toán Tìm Kiếm Theo Chiều Sâu Trên Đồ Thị