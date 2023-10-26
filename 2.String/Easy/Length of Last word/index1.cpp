//{ Driver Code Starts
// Initial Template for C++

// CPP program for implementation of efficient
// approach to find length of last word
#include <iostream>
using namespace std;

int findLength(string s);

// Driver code
int main()
{
    int t;
    cin >> t;
    t += 1;
    bool flag = false;
    while (t--)
    {
        string s;
        getline(cin, s);
        if (!flag)
        {
            flag = true;
            continue;
        }
        cout << findLength(s) << endl;
    }
    return 0;
}

// } Driver Code Ends

// User function Template for C++

int findLength(string s)
{
    // code
    s.erase(s.find_last_not_of(' '));
    return s.size() - s.find_last_of(' ');
}

// https://practice.geeksforgeeks.org/problems/length-of-last-word5721/1
//  Given a string S consisting of upper/lower-case alphabets and empty space characters ‘ ‘. The string may contain spaces at the end. You will have return the length of last word which consists of alphabets only.

// Example 1:

// Input:
// S = "Geeks for Geeks"
// Output: 5
// Explanation: The last word is "Geeks"
//              of length 5.
// Example 2:

// Input:
// S = "Start Coding Here "
// Output: 4
// Explanation: The last word is "Here" of
//              length 4.
// Your Task:
// You don't need to read input or print anything.Your task is to complete the function findLength() which takes a single argument(string S) and returns the length of last word of the string.