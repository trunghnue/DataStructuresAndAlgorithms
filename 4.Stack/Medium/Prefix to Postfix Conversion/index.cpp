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
    bool isOperator(char x)
    {
        switch (x)
        {
        case '+':
        case '-':
        case '*':
        case '/':
        case '%':
            return true;
        }
        return false;
    }
    string preToPost(string pre_exp)
    {
        stack<string> result;
        int n = pre_exp.size();

        for (int i = n - 1; i >= 0; i++)
        {
            char c = pre_exp[i];
            if (isOperator(c))
            {
                string op1 = result.top();
                result.pop();
                string op2 = result.top();
                result.pop();

                string temp = op1 + op2 + c;
                result.push(temp);
            }
            else
            {
                result.push(string(1, c));
            }
        }

        return result.top();
    }
};

//{ Driver Code Starts.

int main()
{
    int t = 1;
    cin >> t;

    // freopen ("output_gfg.txt", "w", stdout);

    while (t--)
    {
        // Input
        string prefix;
        cin >> prefix;

        Solution obj;
        cout << obj.preToPost(prefix) << endl;

        // cout << "~\n";
    }
    // fclose(stdout);

    return 0;
}

// } Driver Code Ends

// https://practice.geeksforgeeks.org/problems/prefix-to-postfix-conversion/1

// You are given a string that represents the prefix form of a valid mathematical expression. Convert it to its postfix form.

// Example:

// Input:
// *-A/BC-/AKL
// Output:
// ABC/-AK/L-*
// Explanation:
// The above output is its valid postfix form.
// Your Task:

// Complete the function preToPost(string pre_exp), which takes a prefix string as input and returns its postfix form.