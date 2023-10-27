//{ Driver Code Starts
#include <iostream>
using namespace std;

// } Driver Code Ends

class Solution
{
public:
    int sameChar(string A, string B)
    {
        // code here
        int result = 0;
        int n = A.size();

        for (int i = 0; i < n; i++)
        {
            if (tolower(A[i]) == tolower(B[i]))
            {
                result++;
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
        string A, B;
        cin >> A;
        cin >> B;
        Solution ob;
        cout << ob.sameChar(A, B) << endl;
    }
    return 0;
}
// } Driver Code Ends

// https://practice.geeksforgeeks.org/problems/c-corresponding-position-in-the-two-strings-that-hold-exactly-the-same-characters5013/1
// Given two strings A and B of equal length, find how many times the corresponding position in the two strings hold exactly the same character.
// The comparison should not be case sensitive.

// Example 1:

// Input:
// A = choice
// B = chancE
// Output: 4
// Explanation: characters at position 0, 1, 4 and 5
// are same in the two strings A and B.
// Example 2:

// Input:
// A = Geek
// B = gang
// Output: 1
// Explanation: charactera at position 0 is the
// same in the two strings A and B.

// Your Task:
// You dont need to read input or print anything. Complete the function sameChar()
// which takes the two strings A and B as input parameters and returns the count of the characters that are same in A and B.