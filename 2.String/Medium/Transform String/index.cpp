//{ Driver Code Starts
#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    int transform(string A, string B)
    {
        // code here.
        int n = A.length();
        int m = B.length();

        if (m != n)
        {
            return -1;
        }

        unordered_map<int, int> umap;
        for (int i = 0; i < n; i++)
        {
            umap[A[i]]++;
        }

        for (int i = 0; i < m; i++)
        {
            if (umap[B[i]] > 0)
            {
                umap[B[i]]--;
                if (umap[B[i]] == 0)
                {
                    umap.erase(B[i]);
                }
            }
        }

        if (!umap.empty())
        {
            return -1;
        }

        int i = n - 1;
        int j = n - 1;
        int result = 0;

        while (i >= 0 && j >= 0)
        {
            while (i >= 0 && A[i] != B[j])
            {
                result++;
                i--;
            }
            i--;
            j--;
        }

        return result;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string A, B;
        cin >> A >> B;
        Solution ob;
        cout << ob.transform(A, B) << endl;
    }
}
// } Driver Code Ends

// https://practice.geeksforgeeks.org/problems/transform-string5648/1
//  Given two strings A and B. Find the minimum number of steps required to transform string A into string B. The only allowed operation for the transformation is selecting a character from string A and inserting it in the beginning of string A.

// Example 1:

// Input:
// A = "abd"
// B = "bad"
// Output: 1
// Explanation: The conversion can take place in
// 1 operation: Pick 'b' and place it at the front.
// Example 2:

// Input:
// A = "GeeksForGeeks"
// B = "ForGeeksGeeks"
// Output: 3
// Explanation: The conversion can take
// place in 3 operations:
// Pick 'r' and place it at the front.
// A = "rGeeksFoGeeks"
// Pick 'o' and place it at the front.
// A = "orGeeksFGeeks"
// Pick 'F' and place it at the front.
// A = "ForGeeksGeeks"
// Your Task:
// You dont need to read input or print anything. Complete the function transform() which takes two strings A and B as input parameters and returns the minimum number of steps required to transform A into B. If transformation is not possible return -1.