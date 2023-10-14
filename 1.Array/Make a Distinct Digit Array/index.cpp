//{ Driver Code Starts

#include <iostream>
#include <set>
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