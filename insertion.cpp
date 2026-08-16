#include<bits/stdc++.h>
using namespace std;
struct Node {
    public: 
    int data;
    Node* next;
    public:
    Node(int data1 , Node* next1){
        data = data1;
        next = next1;
    }
 };

 //insertion at the starting 
 Node* insert(Node* head, int val){
    Node* head = new Node(val,head);
    return temp;
 }

 //insertion from the tail
 Node* tailinsert(Node* head, int val){
    if(head == null){
        return new Node(val);
    }
    Node* temp = head;
    while(temp->next != null){
        temp = temp->next;
    }
    Node* new Node = new Node(val);
    temp -> next = new Node;
    return head;
 }