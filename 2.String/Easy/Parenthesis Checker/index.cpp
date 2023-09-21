//{ Driver Code Starts
#include <iostream>
#include <stack>

using namespace std;

// } Driver Code Ends

class Solution
{
public:
    bool is_match(char a, char b)
    {
        if (a == '(' && b == ')')
            return true;
        if (a == '[' && b == ']')
            return true;
        if (a == '{' && b == '}')
            return true;
        return false;
    }
    // Function to check if brackets are balanced or not.
    bool ispar(string x)
    {
        // Your code here
        int length = x.size();
        if (length % 2 == 1)
        {
            return false;
        }
        stack<char> temp;
        for (int i = 0; i < length; i++)
        {
            if (temp.empty())
            {
                temp.push(x[i]);
            }
            else if (is_match(temp.top(), x[i]))
            {
                temp.pop();
            }
            else
            {
                temp.push(x[i]);
            }
        }
        if (temp.empty())
        {
            return true;
        }
        return false;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    string a;
    cin >> t;
    while (t--)
    {
        cin >> a;
        Solution obj;
        if (obj.ispar(a))
            cout << "balanced" << endl;
        else
            cout << "not balanced" << endl;
    }
}
// } Driver Code Ends

// https://practice.geeksforgeeks.org/problems/parenthesis-checker2744/1
// Given an expression string x. Examine whether the pairs and the orders of {,},(,),[,] are correct in exp.
// For example, the function should return 'true' for exp = [()]{}{[()()]()} and 'false' for exp = [(]).

// Note: The drive code prints "balanced" if function return true, otherwise it prints "not balanced".

// Example 1:

// Input:
// {([])}
// Output:
// true
// Explanation:
// { ( [ ] ) }. Same colored brackets can form
// balanced pairs, with 0 number of
// unbalanced bracket.
// Example 2:

// Input:
// ()
// Output:
// true
// Explanation:
// (). Same bracket can form balanced pairs,
// and here only 1 type of bracket is
// present and in balanced way.
// Example 3:

// Input:
// ([]
// Output:
// false
// Explanation:
// ([]. Here square bracket is balanced but
// the small bracket is not balanced and
// Hence , the output will be unbalanced.