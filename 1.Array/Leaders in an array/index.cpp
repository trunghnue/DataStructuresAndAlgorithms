//{ Driver Code Starts
// C++ program to remove recurring digits from
// a given number
#include <iostream>
#include <vector>
using namespace std;

// } Driver Code Ends

class Solution
{
    // Function to find the leaders in the array.
public:
    vector<int> leaders(int a[], int n)
    {
        // Code here
        vector<int> result;
        result.push_back(a[n - 1]);

        int maxRight = a[n - 1];
        for (int i = n - 2; i >= 0; i--)
        {
            if (maxRight <= a[i])
            {
                maxRight = a[i];
                result.insert(result.begin(), a[i]);
            }
        }

        return result;
    }
};

//{ Driver Code Starts.

int main()
{
    long long t;
    cin >> t; // testcases
    while (t--)
    {
        long long n;
        cin >> n; // total size of array

        int a[n];

        // inserting elements in the array
        for (long long i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        Solution obj;
        // calling leaders() function
        vector<int> v = obj.leaders(a, n);

        // printing elements of the vector
        for (auto it = v.begin(); it != v.end(); it++)
        {
            cout << *it << " ";
        }

        cout << endl;
    }
}

// } Driver Code Ends