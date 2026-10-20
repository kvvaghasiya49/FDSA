#include <iostream>
#include <queue>
using namespace std;

int adj[10][10];
bool visited[10];
int n = 5;

void dfs(int node)
{
    visited[node] = true;
    cout << node << " ";
    for (int i = 0; i < n; i++)
    {
        if (adj[node][i] == 1 && !visited[i])
            dfs(i);
    }
}

void bfs(int start)
{
    bool vis[10] = {false};
    queue<int> q;
    q.push(start);
    vis[start] = true;

    while (!q.empty())
    {
        int curr = q.front();
        q.pop();
        cout << curr << " ";

        for (int i = 0; i < n; i++)
        {
            if (adj[curr][i] == 1 && !vis[i])
            {
                q.push(i);
                vis[i] = true;
            }
        }
    }
}

int main()
{
    adj[0][1] = adj[1][0] = 1;
    adj[0][2] = adj[2][0] = 1;
    adj[1][3] = adj[3][1] = 1;
    adj[2][4] = adj[4][2] = 1;

    cout << "DFS: ";
    dfs(0);
    cout << endl;

    cout << "BFS: ";
    bfs(0);
    cout << endl;

    return 0;
}