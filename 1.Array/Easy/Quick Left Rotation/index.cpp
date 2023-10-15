//{ Driver Code Starts
#include <iostream>
#include <algorithm>
using namespace std;

// } Driver Code Ends
class Solution
{

public:
    void leftRotate(int arr[], int k, int n)
    {
        // Your code goes here
        rotate(arr, arr + (k % n), arr + n);
    }
};

//{ Driver Code Starts.

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int k;
        cin >> k;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            // um[a[i]]++;
        }

        Solution ob;
        ob.leftRotate(a, k, n);

        for (int i = 0; i < n; i++)
            cout << a[i] << " ";

        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends

// https://practice.geeksforgeeks.org/problems/quick-left-rotation3806/1

// Given an array arr[] of size N and an integer K, the task is to left rotate the array K indexes

// Example 1:

// Input: N = 7, K = 2
// arr[] = {1, 2, 3, 4, 5, 6, 7}
// Output: 3 4 5 6 7 1 2
// Explanation: Rotation of the above
// array by 2 will make the output array .

// Example 2:

// Input: N = 6, K = 12
// arr[] = {1, 2, 3, 4, 5, 6}
// Output: 1 2 3 4 5 6