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
    string preToInfix(string pre_exp)
    {
        // Write your code here
        int n = pre_exp.size();
        stack<string> result;

        for (int i = n - 1; i >= 0; i--)
        {
            char c = pre_exp[i];

            if (isOperator(c))
            {
                string op1 = result.top();
                result.pop();
                string op2 = result.top();
                result.pop();
                string temp = "(" + op1 + c + op2 + ")";
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
        cout << obj.preToInfix(prefix) << endl;

        // cout << "~\n";
    }
    // fclose(stdout);

    return 0;
}

// } Driver Code Ends

// https://practice.geeksforgeeks.org/problems/prefix-to-infix-conversion/1
//  You are given a string S of size N that represents the prefix form of a valid mathematical expression. Convert it to its infix form.

// Example 1:

// Input:
// *-A/BC-/AKL
// Output:
// ((A-(B/C))*((A/K)-L))
// Explanation:
// The above output is its valid infix form.
// Your Task:

// Complete the function string preToInfix(string pre_exp), which takes a prefix string as input and return its infix form.
