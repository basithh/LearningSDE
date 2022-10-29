#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node (int d){
        this->data = d;
        this->next = NULL;
    }
};

int insertANode(Node* &head,int data){
    Node* newNode = new Node(data);
    head->next = newNode;
    head = newNode;
    return 0;
}

void traveser(Node* &d){
    Node* w = d->next;
    while(w!=NULL){
        cout<<"HH";
        cout<<w->data;
        w=w->next;
    }
}

int main(){

    Node* abz = new Node(3);
    // cout<<abz->data;
    insertANode(abz, 4);
    insertANode(abz, 6);
    insertANode(abz, 7);
    insertANode(abz, 9);
    insertANode(abz, 3);
    traveser(abz);    

}