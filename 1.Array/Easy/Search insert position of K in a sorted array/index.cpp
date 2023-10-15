//{ Driver Code Starts
#include <iostream>
#include <vector>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution
{
public:
    int searchInsertK(vector<int> Arr, int N, int k)
    {
        // code here
        int low = 0, high = N - 1, mid = 0;
        while (low <= high)
        {
            mid = low + (high - low) / 2;
            if (Arr[mid] == k)
            {
                return mid;
            }
            else if (Arr[mid] < k)
            {
                low = mid + 1;
            }
            else if (Arr[mid] > k)
            {
                high = mid - 1;
            }
        }
        return low;
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
        vector<int> Arr(N);
        for (int i = 0; i < N; i++)
            cin >> Arr[i];
        int k;
        cin >> k;
        Solution obj;
        cout << obj.searchInsertK(Arr, N, k) << endl;
    }
    return 0;
}
// } Driver Code Ends

// https://practice.geeksforgeeks.org/problems/search-insert-position-of-k-in-a-sorted-array/1
//  Given a sorted array Arr[](0-index based) consisting of N distinct integers and an integer k, the task is to find the index of k, if its present in the array Arr[]. Otherwise, find the index where k must be inserted to keep the array sorted.

// Example 1:

// Input:
// N = 4
// Arr = {1, 3, 5, 6}
// k = 5
// Output: 2
// Explaination: Since 5 is found at index 2
// as Arr[2] = 5, the output is 2.

// Example 2:

// Input:
// N = 4
// Arr = {1, 3, 5, 6}
// k = 2
// Output: 1
// Explaination: Since 2 is not present in
// the array but can be inserted at index 1
// to make the array sorted.