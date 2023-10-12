//{ Driver Code Starts
// Initial template for C++

#include <iostream>
#include <algorithm>
using namespace std;

// } Driver Code Ends
// User function template for C++

class Solution
{
public:
    void leftRotate(int arr[], int n, int d)
    {
        // code here
        reverse(arr, arr + d);
        reverse(arr + d, arr + n);
        reverse(arr, arr + n);
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, d;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        cin >> d;
        Solution ob;
        ob.leftRotate(arr, n, d);
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends

// https://practice.geeksforgeeks.org/problems/reversal-algorithm5340/1

// Given an array of size N. The task is to rotate array by D elements where D ≤ N.

// Example 1:

// Input:
// N = 7
// Arr[] = {1, 2, 3, 4, 5, 6, 7}
// D = 2
// Output: 3 4 5 6 7 1 2
// Explanation:
// Rotate by 1: [2, 3, 4, 5, 6, 7, 1]
// Rotate by 2: [3, 4, 5, 6, 7, 1, 2]

// Example 2:

// Input:
// N = 4
// Arr[] = {1, 3, 4, 2}
// D = 3
// Output: 2 1 3 4