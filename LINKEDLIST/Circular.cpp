#include<iostream>
#include<vector>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* prev;

    Node(int val){
        int data;
        prev=next=NULL;
    }
};

class CircularList{
    Node* head;
    Node* tail;

    public:
    CircularList(){
        head = tail = NULL;
    }

    void insertAtHead(int val){
         Node* newNode = new Node(val);
         if(head == NULL){
            head = tail = newNode;
            tail->next = head;
         } else{
            newNode->next=head;
            head = newNode;
            tail->next = head;
         }
    }
};
int main()
{
    return 0;
}