//{ Driver Code Starts
// C++ program to rearrange the elements
// in array such that even positioned are
// greater than odd positioned elements
#include <iostream>
#include <vector>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    vector<int> assign(int a[], int n)
    {
        // Complete teh function
        vector<int> result;
        result.push_back(a[0]);

        for (int i = 1; i < n; i++)
        {
            if (i % 2 == 0)
            {
                if (a[i] > a[i - 1])
                {
                    swap(a[i], a[i - 1]);
                }
            }
            else
            {
                if (a[i] < a[i - 1])
                {
                    swap(a[i], a[i - 1]);
                }
            }
            result.push_back(a[i]);
        }

        return result;
    }
};

//{ Driver Code Starts.

// checking if answer is correct or not
bool checkOrder(vector<int> ans)
{
    for (int i = 1; i < ans.size(); i++)
    {
        if (i % 2 != 0)
        {
            if (ans[i] < ans[i - 1])
            {
                return false;
            }
        }
        else
        {
            if (ans[i] > ans[i - 1])
            {
                return false;
            }
        }
    }
    return true;
}
// Driver Code
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
            cin >> arr[i];
        Solution ob;
        vector<int> ans;
        ans = ob.assign(arr, n);
        bool check_ans = checkOrder(ans);
        if (check_ans)
            cout << "Correct\n";
        else
            cout << "Wrong Answer\n";
    }
    return 0;
}
// } Driver Code Ends

// https://practice.geeksforgeeks.org/problems/rearrange-array-such-that-even-positioned-are-greater-than-odd4804/1
//  Given an array A of n elements, rearrange the array according to the following relations :
//  A[i] >= A[i-1], if i is even.
//  A[i] <= A[i-1], if i is odd.[Considering 1-indexed array]
//  Return the resultant array.

// Example:

// Input 1:
// A[] = {1, 2, 2, 1}
// Output:
// 1 2 1 2
// Explanation:
// Both 2 are at even positions and 1 at odd satisfying
// given condition

// Input 2:
// A[] = {1, 3, 2}
// Output:
// 1 3 2
// Explanation:
// Here, the array is already sorted as per the conditions.