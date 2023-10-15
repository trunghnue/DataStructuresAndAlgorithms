//{ Driver Code Starts
#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    int mostSubarrayCount(vector<int> &arr, int N, int k)
    {
        int left = 0, right = 0;
        int result = 0;
        unordered_map<int, int> umap;

        while (right < N)
        {
            umap[arr[right]]++;

            while (umap.size() > k)
            {
                umap[arr[left]]--;
                if (umap[arr[left]] == 0)
                {
                    umap.erase(arr[left]);
                }
                left++;
            }

            result += (right - left + 1);
            right++;
        }

        return result;
    }
    int subarrayCount(vector<int> &arr, int N, int k)
    {
        // code here
        int mostK = mostSubarrayCount(arr, N, k);
        int mostK1 = mostSubarrayCount(arr, N, k - 1);
        return mostK - mostK1;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N, k;
        cin >> N >> k;

        vector<int> arr(N);
        for (int i = 0; i < N; i++)
            cin >> arr[i];

        Solution obj;
        cout << obj.subarrayCount(arr, N, k) << endl;
    }
    return 0;
}
// } Driver Code Ends

// https://practice.geeksforgeeks.org/problems/subarrays-with-k-different-integers/1
//  Given an integer array arr of size N and an integer k, return the number of good subarrays of arr.
//  A good array is an array where the number of different integers in that is exactly k.

// For example, {1, 3, 4, 4, 1} has 3 different integers: 1, 3, and 4.
// Note : A subarray is a contiguous part of an array.

// Example 1:

// Input:
// N = 5
// k = 2
// arr[ ] = {1, 2, 1, 2, 3}
// Output: 7
// Explanation: Subarrays formed with exactly 2 different integers: {1, 2}, {2, 1}, {1, 2}, {2, 3}, {1, 2, 1}, {2, 1, 2}, {1, 2, 1, 2}.

// Example 2:

// Input:
// N = 5
// k = 3
// arr[ ] = {1, 2, 1, 3, 4}
// Output: 3