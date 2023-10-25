//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next;
    Node *prev;
    Node(int x)
    {
        data = x;
        next = NULL;
        prev = NULL;
    }
};

Node *newNode(int data)
{
    Node *temp = new Node(data);

    return temp;
}

void displayList(Node *head)
{
    // Head to Tail
    while (head->next)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout << head->data;
}

int getLength(Node *head)
{
    Node *temp = head;

    int count = 0;
    while (temp->next != head)
    {
        count++;
        temp = temp->next;
    }
    return count + 1;
}

bool verify(Node *head)
{
    int fl = 0;
    int bl = 0;

    Node *temp = head;

    while (temp->next)
    {
        temp = temp->next;
        fl++;
    }

    while (temp->prev)
    {
        temp = temp->prev;
        bl++;
    }

    return fl == bl;
}

// } Driver Code Ends
/*
struct Node
{
    int data;
    Node * next;
    Node * prev;
    Node (int x)
    {
        data=x;
        next=NULL;
        prev=NULL;
    }

};
*/
Node *reverseDLL(Node *head)
{
    // Your code here
    Node *cur = head;
    Node *prev = NULL;
    Node *next;

    while (cur != NULL)
    {
        next = cur->next;
        cur->next = prev;
        cur->prev = next;
        prev = cur;
        cur = next;
    }
    return prev;
}

//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        Node *head = NULL, *tail = NULL;
        int x;
        cin >> x;
        head = newNode(x);
        tail = head;

        for (int i = 0; i < n - 1; i++)
        {
            cin >> x;
            Node *temp = newNode(x);
            tail->next = temp;
            temp->prev = tail;
            tail = temp;
        }
        head = reverseDLL(head);

        if (verify(head))
            displayList(head);
        else
            cout << "Your pointers are not correctly connected";

        cout << endl;
    }
    return 0;
}

// } Driver Code Ends

// https://practice.geeksforgeeks.org/problems/reverse-a-doubly-linked-list/1
//  Given a doubly linked list of n elements. Your task is to reverse the doubly linked list in-place.

// Example 1:

// Input:
// LinkedList: 3 <--> 4 <--> 5
// Output: 5 4 3
// Example 2:

// Input:
// LinkedList: 75 <--> 122 <--> 59 <--> 196
// Output: 196 59 122 75
// Your Task:
// Your task is to complete the given function reverseDLL(), which takes head reference as argument and this function should reverse the elements such that the tail becomes the new head and all pointers are pointing in the right order. You need to return the new head of the reversed list. The printing and verification is done by the driver code.