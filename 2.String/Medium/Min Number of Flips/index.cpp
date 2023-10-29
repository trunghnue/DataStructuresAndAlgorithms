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