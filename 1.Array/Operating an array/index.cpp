//{ Driver Code Starts
#include <iostream>
using namespace std;
bool searchEle(int a[], int x);
bool insertEle(int a[], int y, int yi);
bool deleteEle(int a[], int z);
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[10000];
        memset(a, -1, sizeof(a));
        for (int i = 0; i < n; i++)
            cin >> a[i];
        int x, y, yi, z;
        cin >> x >> y >> yi >> z;
        bool b = searchEle(a, x);
        if (b == true)
            cout << "1 ";
        else
            cout << "0 ";
        b = insertEle(a, y, yi);
        if (b)
        {
            if (a[yi] == y)
                cout << "1 ";
            else
                cout << "0 ";
        }
        else
            cout << "0 ";
        b = deleteEle(a, z);
        if (b)
        {
            if (!searchEle(a, z))
                cout << "1 \n";
            else
                cout << "0 \n";
        }
        else
            cout << "0 \n";
    }
}
// } Driver Code Ends

/* Complete the function(s) below */

bool searchEle(int a[], int x)
{
    // add code here.
    int i = 0;
    while (a[i] != -1)
    {
        if (x == a[i])
        {
            return true;
        }
        i++;
    }
    return false;
}
bool insertEle(int a[], int y, int yi)
{
    // add code here.
    vector<int> temp;
    int i = yi;
    while (a[i] != -1)
    {
        temp.push_back(a[i]);
        i++;
    }

    a[yi] = y;

    int j = yi + 1;
    int idx = 0;
    while (a[j] != -1)
    {
        a[j] = temp[idx];
        idx++;
        j++;
    }
    return true;
}
bool deleteEle(int a[], int z)
{
    // add code here.
    int i = 0;
    bool dup = false;
    while (a[i + 1] != -1)
    {
        if (a[i] == z || dup)
        {
            dup = true;
            a[i] = a[i + 1];
        }
        i++;
    }
    return true;
}

// https://practice.geeksforgeeks.org/problems/operating-an-array/1

// Given an array A of size N, your task is to do some operations, i.e., search an element x, insert an element y at index yi, and delete an element z by completing the functions. Also, all functions should return a boolean value.

// Note:

// In delete operation return true even if element is not present.
// N is never greater than 10000.
// Input Format:
// N
// A1 A2 . . . An
// x y yi z

// Example:
// Input:
// 5
// 2 4 1 0 6
// 1 2 2 0

// Output:
// 1 1 1
