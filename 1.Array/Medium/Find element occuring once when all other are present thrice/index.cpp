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

// https://practice.geeksforgeeks.org/problems/find-element-occuring-once-when-all-other-are-present-thrice/1
// Given an array of integers arr[] of length N, every element appears thrice except for one which occurs once.
// Find that element which occurs once.

// Example 1:

// Input:
// N = 4
// arr[] = {1, 10, 1, 1}
// Output:
// 10
// Explanation:
// 10 occurs once in the array while the other
// element 1 occurs thrice.
// Example 2:

// Input:
// N = 10
// arr[] = {3, 2, 1, 34, 34, 1, 2, 34, 2, 1}
// Output:
// 3
// Explanation:
// All elements except 3 occurs thrice in the array.