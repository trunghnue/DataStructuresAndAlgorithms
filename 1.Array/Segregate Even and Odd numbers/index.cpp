//{ Driver Code Starts
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// } Driver Code Ends
// User function template for C++
class Solution
{
public:
    void segregateEvenOdd(int arr[], int n)
    {
        // code here
        vector<int> evenArr, oddArr, result;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] % 2 == 0)
            {
                evenArr.push_back(arr[i]);
            }
            else
            {
                oddArr.push_back(arr[i]);
            }
        }

        sort(evenArr.begin(), evenArr.end());
        sort(oddArr.begin(), oddArr.end());

        // join 2 vector
        result.insert(result.end(), evenArr.begin(), evenArr.end());
        result.insert(result.end(), oddArr.begin(), oddArr.end());

        // modify original array
        int length = result.size();
        for (int i = 0; i < length; i++)
        {
            arr[i] = result[i];
        }
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
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        Solution ob;
        ob.segregateEvenOdd(arr, n);
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends

// https://practice.geeksforgeeks.org/problems/segregate-even-and-odd-numbers4629/1

// Given an array Arr[], write a program that segregates even and odd numbers. The program should put all even numbers first in sorted order, and then odd numbers in sorted order.

// Note :- You don't have to return the array, you just have to modify it in-place.

// Example 1:

// Input:
// N = 7
// Arr[] = {12, 34, 45, 9, 8, 90, 3}
// Output: 8 12 34 90 3 9 45
// Explanation: Even numbers are 12, 34,
// 8 and 90. Rest are odd numbers. After
// sorting even numbers 8 12 34 90 and
// after sorting odd numbers 3 9 45. Then
// concat both.
// Example 2:

// Input:
// N = 5
// Arr[] = {0, 1, 2, 3, 4}
// Output: 0 2 4 1 3
// Explanation: 0 2 4 are even and 1 3
// are odd numbers.