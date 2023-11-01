//{ Driver Code Starts
// C++ implementation to convert infix expression to postfix
#include <iostream>
#include <stack>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    int prec(char c)
    {
        if (c == '^')
            return 3;
        else if (c == '/' || c == '*')
            return 2;
        else if (c == '+' || c == '-')
            return 1;
        else
            return -1;
    }
    // Function to convert an infix expression to a postfix expression.
    string infixToPostfix(string s)
    {
        // Your code here
        int n = s.size();
        string result = "";
        stack<char> st;

        for (int i = 0; i < n; i++)
        {
            char c = s[i];

            if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z' || c >= '0' && c <= '9')
            {
                result += c;
            }
            else
            {
                if (c == '(')
                {
                    st.push(c);
                }
                else if (c == ')')
                {
                    while (st.top() != '(')
                    {
                        result += st.top();
                        st.pop();
                    }
                    st.pop();
                }
                else
                {
                    while (!st.empty() && prec(c) <= prec(st.top()))
                    {
                        result += st.top();
                        st.pop();
                    }
                    st.push(c);
                }
            }
        }

        while (!st.empty())
        {
            result += st.top();
            st.pop();
        }

        return result;
    }
};

//{ Driver Code Starts.
// Driver program to test above functions
int main()
{
    int t;
    cin >> t;
    cin.ignore(INT_MAX, '\n');
    while (t--)
    {
        string exp;
        cin >> exp;
        Solution ob;
        cout << ob.infixToPostfix(exp) << endl;
    }
    return 0;
}

// } Driver Code Ends

// https://practice.geeksforgeeks.org/problems/infix-to-postfix-1587115620/1
//  Given an infix expression in the form of string str. Convert this infix expression to postfix expression.

// Infix expression: The expression of the form a op b. When an operator is in-between every pair of operands.
// Postfix expression: The expression of the form a b op. When an operator is followed for every pair of operands.
// Note: The order of precedence is: ^ greater than * equals to / greater than + equals to -.
// Example 1:

// Input: str = "a+b*(c^d-e)^(f+g*h)-i"
// Output: abcd^e-fgh*+^*+i-
// Explanation:
// After converting the infix expression
// into postfix expression, the resultant
// expression will be abcd^e-fgh*+^*+i-
// Example 2:

// Input: str = "A*(B+C)/D"
// Output: ABC+*D/
// Explanation:
// After converting the infix expression
// into postfix expression, the resultant
// expression will be ABC+*D/
