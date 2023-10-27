//{ Driver Code Starts
// Initial Template for C++

#include <iostream>
#include <stack>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution
{
public:
    string reverseWord(string str)
    {
        // Your code goes here
        string result = "";
        stack<char> st;
        int length = str.size();
        for (int i = 0; i < length; i++)
        {
            st.push(str[i]);
        }
        while (!st.empty())
        {
            result.push_back(st.top());
            st.pop();
        }

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
        string s;
        cin >> s;
        Solution ob;
        cout << ob.reverseWord(s) << endl;
    }
    return 0;
}

// } Driver Code Ends

// https://practice.geeksforgeeks.org/problems/reverse-a-string/1
// You are given a string s. You need to reverse the string.

// Example 1:

// Input:
// s = Geeks
// Output: skeeG
// Example 2:

// Input:
// s = for
// Output: rof
// Your Task:

// You only need to complete the function reverseWord() that takes s as parameter and returns the reversed string.