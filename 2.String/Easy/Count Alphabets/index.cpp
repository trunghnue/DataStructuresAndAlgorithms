//{ Driver Code Starts
#include <iostream>
#include <string>
using namespace std;
int Count(string S);

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string S;
        cin >> S;
        cout << Count(S) << endl;
    }
    return 0;
}

// } Driver Code Ends

int Count(string S)
{
    // complete the function here
    int n = S.length();
    int result = 0;
    for (int i = 0; i < n; i++)
    {
        int k = (int)S[i];
        if (k >= 'a' && k <= 'z' || k >= 'A' && k <= 'Z')
        {
            result++;
        }
    }

    return result;
}

// https://practice.geeksforgeeks.org/problems/count-alphabets3649/1
//  Given a string, The task is to count the number of alphabets present in the string.

// Example 1:

// Input:
// S = "adjfjh23"
// Output: 6
// Explanation: only last 2 are not
// alphabets.
// Example 2:

// Input:
// S = "n0ji#k$"
// Output: 4
// Explanation: #, $, 0 are not alphabets.