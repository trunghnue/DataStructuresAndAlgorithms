//{ Driver Code Starts
#include <iostream>
#include <algorithm>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    // Function to count the number of possible triangles.
    int findNumberOfTriangles(int arr[], int n)
    {
        // code here
        int result = 0;
        sort(arr, arr + n);

        for (int i = 0; i < n - 2; i++)
        {
            int k = i + 2;
            for (int j = i + 1; j < n; j++)
            {
                while (k < n && arr[i] + arr[j] > arr[k])
                {
                    k++;
                }
                result += (k - j - 1);
            }
        }

        return result;
    }
};

//{ Driver Code Starts.

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        Solution ob;
        cout << ob.findNumberOfTriangles(arr, n) << endl;
    }
    return 0;
}
// } Driver Code Ends

// https://practice.geeksforgeeks.org/problems/count-possible-triangles-1587115620/1
//  Given an unsorted array arr[] of n positive integers. Find the number of triangles that can be formed with three different array elements as lengths of three sides of triangles.

// Example 1:

// Input:
// n = 3
// arr[] = {3, 5, 4}
// Output:
// 1
// Explanation:
// A triangle is possible
// with all the elements 5, 3 and 4.
// Example 2:

// Input:
// n = 5
// arr[] = {6, 4, 9, 7, 8}
// Output:
// 10
// Explanation:
// There are 10 triangles
// possible  with the given elements like
// (6,4,9), (6,7,8),...