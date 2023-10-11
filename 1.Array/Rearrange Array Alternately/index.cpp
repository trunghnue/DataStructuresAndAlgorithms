//{ Driver Code Starts
// C++ program to rearrange an array in minimum
// maximum form
#include <iostream>
#include <vector>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    // This function wants you to modify the given input
    // array and no need to return anything
    // arr: input array
    // n: size of array
    // Function to rearrange  the array elements alternately.
    void rearrange(long long *arr, int n)
    {

        // Your code here
        int left = 0;
        int right = n - 1;
        vector<long long> temp;
        bool flag = true;

        for (int i = 0; i < n; i++)
        {
            if (flag)
            {
                temp.push_back(arr[right--]);
            }
            else
            {
                temp.push_back(arr[left++]);
            }
            flag = !flag;
        }

        int tempLength = temp.size();
        for (int i = 0; i < tempLength; i++)
        {
            arr[i] = temp[i];
        }
    }
};

//{ Driver Code Starts.

// Driver program to test above function
int main()
{
    int t;

    // testcases
    cin >> t;

    while (t--)
    {

        // size of array
        int n;
        cin >> n;

        long long arr[n];

        // adding elements to the array
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        Solution ob;

        // calling rearrange() function
        ob.rearrange(arr, n);

        // printing the elements
        for (int i = 0; i < n; i++)
            cout << arr[i] << " ";

        cout << endl;
    }
    return 0;
}

// } Driver Code Ends

// https://practice.geeksforgeeks.org/problems/-rearrange-array-alternately-1587115620/1

// Given a sorted array of positive integers. Your task is to rearrange the array elements alternatively i.e first element should be max value, second should be min value, third should be second max, fourth should be second min and so on.
// Note: Modify the original array itself. Do it without using any extra space. You do not have to return anything.

// Example 1:

// Input:
// n = 6
// arr[] = {1,2,3,4,5,6}
// Output: 6 1 5 2 4 3
// Explanation: Max element = 6, min = 1,
// second max = 5, second min = 2, and
// so on... Modified array is : 6 1 5 2 4 3.
// Example 2:

// Input:
// n = 11
// arr[]={10,20,30,40,50,60,70,80,90,100,110}
// Output:110 10 100 20 90 30 80 40 70 50 60
// Explanation: Max element = 110, min = 10,
// second max = 100, second min = 20, and
// so on... Modified array is :
// 110 10 100 20 90 30 80 40 70 50 60.