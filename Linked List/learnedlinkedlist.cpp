#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* nextnode;
    Node(int data){
        this->data = data;
        this->nextnode = NULL;
    }

};


void insertHeadNode(Node* &head,int data){
    Node * createNewNode = new Node(data);
    createNewNode->nextnode = head;
    head = createNewNode;
}

void insertTailNodeWithHead(Node* &head,int data){
    Node *createNewNode = new Node(data);
    Node *temp = head; 
    while (temp->nextnode != NULL)
    {
        temp = temp->nextnode;
    }
    temp->nextnode=createNewNode;
}

void looper(Node* &head){
    Node *temp = head;
    while(temp->nextnode != NULL){
        temp = temp->nextnode;
    }
    temp->nextnode=head;
}

void insertTailNode(Node* &tail,int data){
    Node * createNewNode = new Node(data);
    tail->nextnode = createNewNode;
    tail = createNewNode; 
}

void insertNodeAtposition(Node* &head,int pos,int data){
    if(pos == 0){
        insertHeadNode(head,data);
        return;
    }
    Node * createNewNode = new Node(data);
    int count = 0;
    Node * temp = head;
    while(temp->nextnode != NULL){
        count++;
        if(count==pos){
            createNewNode->nextnode = temp->nextnode;
            temp->nextnode = createNewNode;
            break;
        }
        temp = temp->nextnode;
    }
   
}

void traverse(Node* &head){
    Node *temp = head;
    while (temp != NULL)
    {
       cout<<temp->data<<"  ";
       temp = temp->nextnode;  
    }
    
}

void circular(){

}

int main(){
    Node * head = new Node(8);
    // Node * tail = head;
    // insertTailNode(tail,32);
    // insertTailNode(tail,5);
    // insertTailNode(tail,3);
    // insertTailNode(tail,1);
    insertHeadNode(head,5);
    insertHeadNode(head,1);
    insertHeadNode(head,3);
    insertHeadNode(head,4);
    insertHeadNode(head,6);
    insertHeadNode(head,7);
    insertNodeAtposition(head,9,69);
    // insertTailNodeWithHead(head,9);
    // looper(head);
    traverse(head);
    return 0;
}