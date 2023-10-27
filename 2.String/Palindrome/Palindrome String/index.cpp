//{ Driver Code Starts

#include <iostream>
using namespace std;

// } Driver Code Ends
// User function template for C++
class Solution
{
public:
    int isPalindrome(string S)
    {
        // Your code goes here
        int n = S.size();
        int left = 0;
        int right = n - 1;

        while (left < right)
        {
            if (S[left] != S[right])
            {
                return 0;
            }
            left++;
            right--;
        }

        return 1;
    }
};

//{ Driver Code Starts.

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;

        Solution ob;

        cout << ob.isPalindrome(s) << "\n";
    }

    return 0;
}
// } Driver Code Ends

// https://practice.geeksforgeeks.org/problems/palindrome-string0817/1
// Given a string S, check if it is palindrome or not.

// Example 1:

// Input: S = "abba"
// Output: 1
// Explanation: S is a palindrome
// Example 2:

// Input: S = "abc"
// Output: 0
// Explanation: S is not a palindrome
// Your Task:
// You don't need to read input or print anything. Complete the function isPalindrome()which accepts string S and returns an integer value 1 or 0.