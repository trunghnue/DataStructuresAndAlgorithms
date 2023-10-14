//{ Driver Code Starts
// Initial Template for C++

#include <iostream>
#include <unordered_map>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution
{
public:
    int singleElement(int arr[], int N)
    {
        // code here
        unordered_map<int, int> umap;
        for (int i = 0; i < N; i++)
        {
            umap[arr[i]]++;
        }

        for (auto x : umap)
        {
            if (x.second == 1)
            {
                return x.first;
            }
        }
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;

        cin >> N;
        int arr[N];

        for (int i = 0; i < N; i++)
            cin >> arr[i];

        Solution ob;
        cout << ob.singleElement(arr, N);
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends