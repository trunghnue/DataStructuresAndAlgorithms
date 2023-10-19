//{ Driver Code Starts
#include <iostream>
#include <string>
using namespace std;

// } Driver Code Ends
// User function template for C++
class Solution
{
public:
    int search(string X, string Y)
    {
        // Your code goes here
        int found = X.find(Y);
        if (found == string::npos)
        {
            return -1;
        }
        int result;
        while (found != string::npos)
        {
            result = found + 1;
            found = X.find(Y, found + 1);
        }

        return result;
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
        string x, y;
        cin >> x >> y;
        Solution ob;

        cout << ob.search(x, y) << "\n";
    }

    return 0;
}
// } Driver Code Ends

// https://practice.geeksforgeeks.org/problems/find-substring-from-last-of-the-given-string3440/1
//  Given two strings X and Y, the task is to find the last index in X at which string Y appears, if Y does not appear then the answer is -1.

// Example 1:

// Input: X = "geeksforgeeks", Y = "geeks"
// output: 9
// Explanation: string "geeks" appears at
// index 1 and 9
// Example 2:

// Input: X = "geesforgees", Y = "geeks"
// output: -1
// Explanation: "geeks" does not appear
// Your task:
// You do not need to read any input or print anything. The task is to complete the function search(), which takes two strings as input and returns an integer.