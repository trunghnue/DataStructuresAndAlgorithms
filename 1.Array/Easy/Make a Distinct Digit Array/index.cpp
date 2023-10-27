//{ Driver Code Starts

#include <iostream>
#include <set>
#include <vector>
using namespace std;

// } Driver Code Ends

class Solution
{
public:
    vector<int> common_digits(vector<int> nums)
    {
        // Code here
        set<int> digits;
        int length = nums.size();
        for (int i = 0; i < length; i++)
        {
            int temp = nums[i];
            while (temp > 0)
            {
                int d = temp % 10;
                digits.insert(d);
                temp = temp / 10;
            }
        }
        vector<int> result(digits.begin(), digits.end());
        return result;
    }
};

//{ Driver Code Starts.
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        vector<int> nums(n);
        for (int i = 0; i < nums.size(); i++)
            cin >> nums[i];
        Solution ob;
        vector<int> ans = ob.common_digits(nums);
        for (auto i : ans)
            cout << i << " ";
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends

// https://practice.geeksforgeeks.org/problems/make-a-distinct-digit-array2007/1
// Given an array nums of positive integers of size N. Find all distinct digits present in nums.

// Example 1:

// Input: nums = [131, 11, 48]
// Output: 1 3 4 8
// Explanation: 1, 3, 4, and 8 are only distinct
// digits that can be extracted from the numbers
// of the array.
// Example 2:

// Input: nums = [111, 222, 333, 4444, 666]
// Output: 1 2 3 4 6
// Explanation: 1, 2, 3, 4, and 6 are only distinct
// digits that can be extracted from the numbers
// of the array.