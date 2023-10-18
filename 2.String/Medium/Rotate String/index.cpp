//{ Driver Code Starts
#include <iostream>
#include <vector>
#include <string>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    vector<char> StringQuery(int N, int Q, string S, int Q1[], int Q2[])
    {
        // code here
        vector<char> result;
        int k = 0;
        for (int i = 0; i < Q; i++)
        {
            if (Q1[i] == 1)
            {
                k += N - (Q2[i] % N);
            }
            else if (Q1[i] == 2)
            {
                int l = (Q2[i] + k) % N;
                result.push_back(S[l]);
            }
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
        int N, Q;
        cin >> N >> Q;
        string S;
        cin >> S;
        int Q1[Q], Q2[Q];
        for (int i = 0; i < Q; i++)
            cin >> Q1[i] >> Q2[i];
        Solution ob;
        vector<char> ans = ob.StringQuery(N, Q, S, Q1, Q2);
        for (auto u : ans)
            cout << u << endl;
    }
}
// } Driver Code Ends

// https://practice.geeksforgeeks.org/problems/lazy-pasha1646/1
//  Given a string S of size N and Q queries.Each query is either of the following types:
//  Type 1- Rotate the string by K character from the end.
//  Type 2- Print the character at the I'th index of the resulting string at that instant.
//  Answer all queries.

// Example 1:

// Input:
// N=7 Q=5
// S=abcdefg
// Query1: Type=1 K=2
// Query2: Type=2 I=0
// Query3: Type=2 I=6
// Query4: Type=1 K=4
// Query5: Type=2 I=1
// Output:
// f
// e
// c
// Explanation:
// After First query String becomes-"fgabcde"
// Second query returns - 'f'
// Third query returns -'e'
// After Fourth Query String becomes-"bcdefga"
// Fifth Query returns -'c'
// Example 2:

// Input:
// N=5 Q=2
// S=geeks
// Query1: Type=1 K=4
// Query2: Type=2 I=4
// Output:
// g
// Explanation:
// After first query,string becomes "eeksg".
// Second query returns 'g'.