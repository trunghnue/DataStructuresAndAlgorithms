//{ Driver Code Starts
#include <iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *next;

    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

// } Driver Code Ends
/* Link list node */
/*
struct Node
{
    int data;
    Node* next;
    Node(int x) {  data = x;  next = NULL; }
}; */

class Solution
{
public:
    // Function to count nodes of a linked list.
    int getCount(struct Node *head)
    {
        // Code here
        int result = 0;
        while (head != NULL)
        {
            result++;
            head = head->next;
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

        int data;
        cin >> data;
        struct Node *head = new Node(data);
        struct Node *tail = head;
        for (int i = 0; i < n - 1; ++i)
        {
            cin >> data;
            tail->next = new Node(data);
            tail = tail->next;
        }
        Solution ob;
        cout << ob.getCount(head) << endl;
    }
    return 0;
}
// } Driver Code Ends

// https://practice.geeksforgeeks.org/problems/count-nodes-of-linked-list/1
//  Given a singly linked list. The task is to find the length of the linked list, where length is defined as the number of nodes in the linked list.

// Example 1:

// Input:
// LinkedList: 1->2->3->4->5
// Output: 5
// Explanation: Count of nodes in the
// linked list is 5, which is its length.
// Example 2:

// Input:
// LinkedList: 2->4->6->7->5->1->0
// Output: 7
// Explanation: Count of nodes in the
// linked list is 7. Hence, the output
// is 7.