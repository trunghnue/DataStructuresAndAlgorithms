//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
};

void push(struct Node **head_ref, int data)
{
    struct Node *ptr1 = (struct Node *)malloc(sizeof(struct Node));
    struct Node *temp = *head_ref;
    ptr1->data = data;
    ptr1->next = *head_ref;

    if (*head_ref != NULL)
    {
        while (temp->next != *head_ref)
            temp = temp->next;
        temp->next = ptr1;
    }
    else
        ptr1->next = ptr1;

    *head_ref = ptr1;
}

void printList(struct Node *);

int main()
{
    int i, n, t, val;
    scanf("%d", &t);

    while (t--)
    {
        struct Node *head = NULL;
        scanf("%d", &n);
        for (i = 0; i < n; i++)
        {
            scanf("%d", &val);
            push(&head, val);
        }
        printList(head);
        printf("\n");
    }
    return 0;
}

// } Driver Code Ends

// User function Template for C++

/* structure for a node
struct Node
{
    int data;
    struct Node *next;
}; */

/* Function to print nodes in a given Circular linked list */
void printList(struct Node *head)
{
    // code here
    Node *cur = head->next;
    cout << head->data << " ";
    while (cur != head)
    {
        cout << cur->data << " ";
        cur = cur->next;
    }
}

// https://practice.geeksforgeeks.org/problems/circular-linked-list-traversal/1
//  Given a circular linked list, your task is to complete the method printList() that prints the linked list.

// Input:
// The printList function takes a single argument as input the reference pointer to the head of the linked list.
// There are multiple test cases and for each test, the function will be called separately.
// Output: You just need to print the LinkedList in the same line and the next line will be added by the Driver Code.

// Example:

// Input:
// 2
// 7
// 374 363 171 497 282 306 426
// 2
// 162 231
// Output:
// 426 306 282 497 171 363 374
// 231 162
