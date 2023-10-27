//{ Driver Code Starts
#include <iostream>
using namespace std;

// } Driver Code Ends
class Solution
{

public:
    string findRollOut(string s, long long arr[], int n)
    {
        // Your code goes here
        long long int hash[n + 1] = {0};
        for (int i = 0; i < n; i++)
        {
            hash[arr[i]]++;
        }

        for (int i = n - 1; i >= 0; i--)
        {
            hash[i] += hash[i + 1];
        }

        for (int i = 0; i < n; i++)
        {
            s[i] = ((s[i] - 'a') + hash[i + 1]) % 26 + 'a';
        }
        return s;
    }
};

//{ Driver Code Starts.

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        long long roll[n];
        for (int i = 0; i < n; i++)
            cin >> roll[i];

        Solution ob;

        string res = ob.findRollOut(s, roll, n);
        cout << res;

        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends

// https://practice.geeksforgeeks.org/problems/roll-the-characters-of-a-string2127/1
//  Given a string S and an array roll where roll[i] represents rolling first roll[i] characters in the string,
// the task is to apply every roll[i] on the string and output the final string. Rolling means increasing the ASCII value of character,
// like rolling z would result in a, rolling b would result in c, etc.

// Example 1:

// Input: s = "bca"
// roll[] = {1, 2, 3}
// Output: eeb
// Explanation: arr[0] = 1 means roll
// first character of string -> cca
// arr[1] = 2 means roll
// first two characters of string -> dda
// arr[2] = 3 means roll
// first three characters of string -> eeb
// So final ans is "eeb".

// Example 2:

// Input: s = "zcza"
// roll[] = {1, 1, 3, 4}
// Output: debb

// Your Task:
// This is a function problem. You don't need to take any input, as it is already accomplished by the driver code.
// You just need to complete the function findRollOut() that takes String S, array roll,
// and integer N as parameters and returns the modified string.

// Note- The length of the array roll and length of the string are equal.