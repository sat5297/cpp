#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
    int data;
    Node(int x)
    {
        data = x;
    }
    Node *next = NULL;
};

Node* insertFront(int key, Node* head)
{
    Node* newNode = new Node(key);
    
    if(head == NULL)
        return newNode;
    
    newNode->next = head;
    return newNode;
}

int main()
{
    Node *head = new Node(12);
    
    Node *first = head;
    Node *head1 = head;
    int n;
    
    for(int i = 0; i < 10; i++)
    {
        cin >> n;
        head->next = new Node(n);
        head = head->next;
    }
    cout << endl << endl;
    
    while(first != NULL)
    {
        cout << first->data << " ";
        first = first->next;
    }
    cout << "Enter the key to insert: ";
    cin >> n;
    first = insertFront(n, head1);
    
    cout << endl << endl;
    
    while(first != NULL)
    {
        cout << first->data << " ";
        first = first->next;
    }
    
    return 0;
}
