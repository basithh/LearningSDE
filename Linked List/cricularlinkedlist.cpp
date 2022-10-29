#include <iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node *node;
    Node(int data)
    {
        this->data = data;
        this->node = NULL;
    }
};
void cricularLinkedAdd(Node* &head, int data)
{
    Node *createNode = new Node(data);
    createNode->node = head;
    Node *tempNode = head;
    while (tempNode->node != head)
    {
        tempNode = tempNode->node;
    }
    tempNode->node = createNode;
}

void traversePrinter(Node* &head)
{
    Node *createNode = head;
    while (createNode->node!=head)
    {
        cout<<" q"<<createNode->data;
        createNode = createNode->node;
    }
}

int main()
{
    Node *head = new Node(4);
    cricularLinkedAdd(head,1);
    cricularLinkedAdd(head,2);
    cricularLinkedAdd(head,3);
    cricularLinkedAdd(head,4);
    cricularLinkedAdd(head,5);
    cricularLinkedAdd(head,6);
    cricularLinkedAdd(head,7);
    cricularLinkedAdd(head,8);
    cricularLinkedAdd(head,9);
    traversePrinter(head);
    
}