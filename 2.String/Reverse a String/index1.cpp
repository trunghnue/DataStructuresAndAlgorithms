//{ Driver Code Starts
// Initial Template for C++

#include <iostream>
#include <string>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution
{
public:
    string reverseWord(string str)
    {
        // Your code goes here
        int length = str.length();
        for (int left = 0, right = length - 1; left < right; left++, right--)
        {
            swap(str[left], str[right]);
        }
    }
};

//{ Driver Code Starts.

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        Solution ob;
        cout << ob.reverseWord(s) << endl;
    }
    return 0;
}

// } Driver Code Ends

// https://practice.geeksforgeeks.org/problems/reverse-a-string/1
//  You are given a string s. You need to reverse the string.

// Example 1:

// Input:
// s = Geeks
// Output: skeeG
// Example 2:

// Input:
// s = for
// Output: rof