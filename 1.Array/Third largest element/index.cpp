//{ Driver Code Starts
#include <iostream>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    int thirdLargest(int a[], int n)
    {
        // Your code here
        if (n < 3)
        {
            return -1;
        }
        int first, second, third;
        first = second = third = INT_MIN;

        for (int i = 0; i < n; i++)
        {
            if (a[i] > first)
            {
                third = second;
                second = first;
                first = a[i];
            }
            else if (a[i] > second && a[i] < first)
            {
                third = second;
                second = a[i];
            }
            else if (a[i] > third && a[i] < second)
            {
                third = a[i];
            }
        }
        return third;
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
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        Solution obj;
        cout << obj.thirdLargest(a, n) << endl;
    }
}
// } Driver Code Ends

// https://practice.geeksforgeeks.org/problems/third-largest-element/1
//  Given an array of distinct elements. Find the third largest element in it.

// Suppose you have A[] = {1, 2, 3, 4, 5, 6, 7}, its output will be 5 because it is the 3 largest element in the array A.

// Example 1:

// Input:
// N = 5
// A[] = {2,4,1,3,5}
// Output: 3
// Example 2:

// Input:
// N = 2
// A[] = {10,2}
// Output: -1