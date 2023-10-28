//{ Driver Code Starts
#include <iostream>
using namespace std;

// } Driver Code Ends

class Solution
{
public:
    bool checkBinary(string s)
    {
        // Your Code Here
        int n = s.size();
        size_t firstOne = s.find_first_of('1');
        if (firstOne == string::npos)
            return true;
        size_t lastOne = s.find_last_of('1');
        s.erase(lastOne);
        return s.find('0', firstOne) == string::npos;
    }
};

//{ Driver Code Starts.

int32_t main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        Solution ob;
        if (ob.checkBinary(s))
            cout << "VALID\n";
        else
            cout << "INVALID\n";
    }
}

// Contributed By: Pranay Bansal

// } Driver Code Ends
// https://practice.geeksforgeeks.org/problems/check-binary-string0402/1
//  Given a binary string S of 0 and 1, check if the given string is valid or not.
//  The given string is valid when there is no zero is present in between 1s.

// Example 1:

// Input:
// S = "100"
// Output: VALID
// Explanation: 100. The string have just a
// single 1, hence it is valid.

// Example 2:

// Input:
// S = "1110001"
// Output: INVALID
// Explanation: 1110001. There are 3 zeros
// between the 3rd and the 4th ones. Hence,
// it's an invalid string.

// Your Task:
// You don't need to read input or print anything,
// Your task is to complete the function checkBinary() which takes a binary string as input are returns true if the string is valid.
// Else, it returns false.