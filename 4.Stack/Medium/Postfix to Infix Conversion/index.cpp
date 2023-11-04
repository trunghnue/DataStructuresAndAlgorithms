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
        case '/':
        case '*':
        case '^':
        case '%':
            return true;
        }
        return false;
    }
    string postToInfix(string exp)
    {
        // Write your code here
        int n = exp.size();
        stack<string> result;

        for (int i = 0; i < n; i++)
        {
            char c = exp[i];
            if (isOperator(c))
            {
                string op1 = result.top();
                result.pop();
                string op2 = result.top();
                result.pop();
                result.push('(' + op2 + c + op1 + ')');
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
        string postfix;
        cin >> postfix;
        // char marker; cin >> marker;

        Solution obj;
        cout << obj.postToInfix(postfix) << endl;

        // cout << "~\n";
    }
    fclose(stdout);

    return 0;
}

// } Driver Code Ends

// https://practice.geeksforgeeks.org/problems/postfix-to-infix-conversion/1

// You are given a string that represents the postfix form of a valid mathematical expression. Convert it to its infix form.

// Example:

// Input:
// ab*c+
// Output:
// ((a*b)+c)
// Explanation:
// The above output is its valid infix form.
// Your Task:

// Complete the function string postToInfix(string post_exp), which takes a postfix string as input and returns its infix form.