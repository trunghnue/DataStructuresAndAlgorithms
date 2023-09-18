//{ Driver Code Starts
#include <bits/stdc++.h>
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
                    result = {left + 1, right};
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

        result = {-1}; // If no subarray is found, return {-1}.
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