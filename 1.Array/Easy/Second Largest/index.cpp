//{ Driver Code Starts
#include <iostream>

using namespace std;

// } Driver Code Ends
// User function template for C++
class Solution
{
public:
    // Function returns the second
    // largest elements
    int print2largest(int arr[], int n)
    {
        // code here
        if (n < 2)
        {
            return -1;
        }

        int first, second;
        first = second = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] > first)
            {
                second = first;
                first = arr[i];
            }
            else if (arr[i] > second && arr[i] < first)
            {
                second = arr[i];
            }
        }
        if (second == INT_MIN)
        {
            return -1;
        }
        return second;
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
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.print2largest(arr, n);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends

// https://practice.geeksforgeeks.org/problems/second-largest3735/1
//  Given an array Arr of size N, print second largest distinct element from an array.

// Example 1:

// Input:
// N = 6
// Arr[] = {12, 35, 1, 10, 34, 1}
// Output: 34
// Explanation: The largest element of the
// array is 35 and the second largest element
// is 34.
// Example 2:

// Input:
// N = 3
// Arr[] = {10, 5, 10}
// Output: 5
// Explanation: The largest element of
// the array is 10 and the second
// largest element is 5.