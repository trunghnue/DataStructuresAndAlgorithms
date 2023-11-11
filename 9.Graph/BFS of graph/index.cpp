//{ Driver Code Starts
#include <iostream>
#include <queue>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    // Function to return Breadth First Traversal of given graph.
    vector<int> bfsOfGraph(int V, vector<int> adj[])
    {
        // Code here
        vector<int> result;
        queue<int> q;
        bool visited[V];

        memset(visited, false, sizeof(visited));
        q.push(0);
        visited[0] = true;

        while (!q.empty())
        {
            int v = q.front();
            result.push_back(v);
            q.pop();

            for (int x : adj[v])
            {
                if (!visited[x])
                {
                    q.push(x);
                    visited[x] = true;
                }
            }
        }

        return result;
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
        cin >> V >>

            E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++)
        {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            // 		adj[v].push_back(u);
        }
        // string s1;
        // cin>>s1;
        Solution obj;
        vector<int> ans = obj.bfsOfGraph(V, adj);
        for (int i = 0; i < ans.size(); i++)
        {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends

// https://practice.geeksforgeeks.org/problems/bfs-traversal-of-graph/1

// Given a directed graph. The task is to do Breadth First Traversal of this graph starting from 0.
// Note: One can move from node u to node v only if there's an edge from u to v.
// Find the BFS traversal of the graph starting from the 0th vertex, from left to right according to the input graph.
// Also, you should only take nodes directly or indirectly connected from Node 0 in consideration.

// Example 1:

// Input:
// V = 5, E = 4
// adj = {{1,2,3},{},{4},{},{}}

// Output:
// 0 1 2 3 4
// Explanation:
// 0 is connected to 1 , 2 , 3.
// 2 is connected to 4.
// so starting from 0, it will go to 1 then 2
// then 3. After this 2 to 4, thus bfs will be
// 0 1 2 3 4.
// Example 2:

// Input:
// V = 3, E = 2
// adj = {{1,2},{},{}}

// Output:
// 0 1 2
// Explanation:
// 0 is connected to 1 , 2.
// so starting from 0, it will go to 1 then 2,
// thus bfs will be 0 1 2.

// Your task:
// You dont need to read input or print anything. Your task is to complete the function bfsOfGraph()
// which takes the integer V denoting the number of vertices and adjacency list as input parameters and
// returns  a list containing the BFS traversal of the graph starting from the 0th vertex from left to right.

// Expected Time Complexity: O(V + E)
// Expected Auxiliary Space: O(V)
