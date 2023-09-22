// Subarray with given sum
//{ Driver Code Starts
#include <iostream>
#include <vector>

using namespace std;

// } Driver Code Ends
class Solution
{
public:
    // Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(vector<int> arr, int n, long long s)
    {
        // Your code here
        int left = 0, right = 0, sum = 0;
        vector<int> result;

        while (right <= n)
        {
            while (sum > s && left < right)
            {
                sum -= arr[left];
                left++;
            }

            if (sum == s)
            {
                if (left < right)
                {
                    result.push_back(left + 1);
                    result.push_back(right);
                    return result;
                }
            }

            if (right < n)
            {
                sum += arr[right];
                right++;
            }
            else
            {
                break; // If right reaches the end and sum is still not equal to s, exit the loop.
            }
        }

        result.push_back(-1); // If no subarray is found, return {-1}.
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
        int n;
        long long s;
        cin >> n >> s;
        vector<int> arr(n);
        // int arr[n];
        const int mx = 1e9;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        Solution ob;
        vector<int> res;
        res = ob.subarraySum(arr, n, s);

        for (int i = 0; i < res.size(); i++)
            cout << res[i] << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends

// https://practice.geeksforgeeks.org/problems/subarray-with-given-sum-1587115621/1
// Given an unsorted array A of size N that contains only positive integers, find a continuous sub-array that adds to a given number S and return the left and right index(1-based indexing) of that subarray.

// In case of multiple subarrays, return the subarray indexes which come first on moving from left to right.

// Note:- You have to return an ArrayList consisting of two elements left and right. In case no such subarray exists return an array consisting of element -1.

// Example 1:

// Input:
// N = 5, S = 12
// A[] = {1,2,3,7,5}
// Output: 2 4
// Explanation: The sum of elements
// from 2nd position to 4th position
// is 12.
// Example 2:

// Input:
// N = 10, S = 15
// A[] = {1,2,3,4,5,6,7,8,9,10}
// Output: 1 5
// Explanation: The sum of elements
// from 1st position to 5th position
// is 15.