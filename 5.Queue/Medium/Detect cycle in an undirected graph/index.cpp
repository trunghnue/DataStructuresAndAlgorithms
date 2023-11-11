//{ Driver Code Starts
#include <iostream>
#include <queue>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    // Function to detect cycle in an undirected graph.
    bool BFS(vector<int> adj[], int i, int V, bool *visited)
    {
        // node, parent
        queue<int> q;
        int parent[V];

        memset(parent, -1, sizeof(parent));
        q.push(i);
        visited[i] = true;

        while (!q.empty())
        {
            int v = q.front();
            q.pop();

            for (int x : adj[v])
            {
                if (!visited[x])
                {
                    q.push(x);
                    visited[x] = true;
                    parent[x] = v;
                }
                else if (x != parent[v])
                {
                    return true;
                }
            }
        }

        return false;
    }

    bool isCycle(int V, vector<int> adj[])
    {
        // Code here
        bool visited[V];

        memset(visited, false, sizeof(visited));
        for (int i = 0; i < V; i++)
        {
            if (!visited[i] && BFS(adj, i, V, visited))
            {
                return true;
            }
        }

        return false;
    }
};

//{ Driver Code Starts.
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int V, E;
        cin >> V >> E;
        vector<int> adj[V];
        for (int i = 0; i < E; i++)
        {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        Solution obj;
        bool ans = obj.isCycle(V, adj);
        if (ans)
            cout << "1\n";
        else
            cout << "0\n";
    }
    return 0;
}
// } Driver Code Ends

// https://practice.geeksforgeeks.org/problems/detect-cycle-in-an-undirected-graph/1

// Given an undirected graph with V vertices and E edges, check whether it contains any cycle or not.
// Graph is in the form of adjacency list where adj[i] contains all the nodes ith node is having edge with.

// Example 1:

// Input:
// V = 5, E = 5
// adj = {{1}, {0, 2, 4}, {1, 3}, {2, 4}, {1, 3}}
// Output: 1
// Explanation:

// 1->2->3->4->1 is a cycle.
// Example 2:

// Input:
// V = 4, E = 2
// adj = {{}, {2}, {1, 3}, {2}}
// Output: 0
// Explanation:

// No cycle in the graph.

// Your Task:
// You don't need to read or print anything. Your task is to complete the function isCycle() which takes V denoting the number
// of vertices and adjacency list as input parameters and returns a boolean value denoting if the undirected graph contains any cycle or not,
// return 1 if a cycle is present else return 0.

// NOTE: The adjacency list denotes the edges of the graph where edges[i] stores all other vertices to which ith vertex is connected.

// Expected Time Complexity: O(V + E)
// Expected Space Complexity: O(V)
