// Next Greater Element

//{ Driver Code Starts
#include <iostream>
#include <vector>
#include <stack>

using namespace std;

// } Driver Code Ends
class Solution
{
public:
    // Function to find the next greater element for each element of the array.
    vector<long long> nextLargerElement(vector<long long> arr, int n)
    {
        // Your code here
        stack<long long> myStack;
        vector<long long> result(n);

        myStack.push(0);

        for (int i = 1; i < n; i++)
        {
            while (!myStack.empty() && arr[myStack.top()] < arr[i])
            {
                result[myStack.top()] = arr[i];
                myStack.pop();
            }
            myStack.push(i);
        }
        while (!myStack.empty())
        {
            result[myStack.top()] = -1;
            myStack.pop();
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

        int n;
        cin >> n;
        vector<long long> arr(n);
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        Solution obj;
        vector<long long> res = obj.nextLargerElement(arr, n);
        for (long long i : res)
            cout << i << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends

// https://practice.geeksforgeeks.org/problems/next-larger-element-1587115620/1
// Given an array arr[ ] of size N having elements, the task is to find the next greater element for each element of the array in order of their appearance in the array.
// Next greater element of an element in the array is the nearest element on the right which is greater than the current element.
// If there does not exist next greater of current element, then next greater element for current element is -1. For example, next greater of the last element is always -1.

// Example 1:

// Input:
// N = 4, arr[] = [1 3 2 4]
// Output:
// 3 4 4 -1
// Explanation:
// In the array, the next larger element
// to 1 is 3 , 3 is 4 , 2 is 4 and for 4 ?
// since it doesn't exist, it is -1.
// Example 2:

// Input:
// N = 5, arr[] [6 8 0 1 3]
// Output:
// 8 -1 1 3 -1
// Explanation:
// In the array, the next larger element to
// 6 is 8, for 8 there is no larger elements
// hence it is -1, for 0 it is 1 , for 1 it
// is 3 and then for 3 there is no larger
// element on right and hence -1.