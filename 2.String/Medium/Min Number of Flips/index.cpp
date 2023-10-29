//{ Driver Code Starts
#include <iostream>
using namespace std;

int minFlips(string s);
int32_t main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;

        cout << minFlips(s) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends

int minFlips(string S)
{
    // your code here
    int result0 = 0, result1 = 0;
    int n = S.size();
    if (S[0] == '0')
    {
        result0++;
    }
    else if (S[0] == '1')
    {
        result1++;
    }
    for (int i = 1; i < n; i++)
    {
        if (i % 2 == 0) // i chẵn
        {
            if (S[i] != '1')
            {
                result0++;
            }
            if (S[i] != '0')
            {
                result1++;
            }
        }
        else // i lẻ
        {
            if (S[i] != '0')
            {
                result0++;
            }
            if (S[i] != '1')
            {
                result1++;
            }
        }
    }

    return min(result0, result1);
}

// https://practice.geeksforgeeks.org/problems/min-number-of-flips3210/1
//  Given a binary string, that is it contains only 0s and 1s.
//  We need to make this string a sequence of alternate characters by flipping some of the bits,
//  our goal is to minimize the number of bits to be flipped.

// Example 1:

// Input:
// S = "001"
// Output: 1
// Explanation:
// We can flip the 0th bit to 1 to have
// 101.

// Example 2:

// Input:
// S = "0001010111"
// Output: 2
// Explanation: We can flip the 1st and 8th bit
// bit to have "0101010101"
// 101.