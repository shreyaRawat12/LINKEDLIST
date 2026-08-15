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


 //head deletion
 Node* deletehead(Node* head){
    Node* temp = head;
    head= head-> next;
    free(temp);
    return head;
 }

 //tail deletion
Node* taildelete(Node* head){
    if(head == null || head-> null ){
        return null;
    }
    while(temp->next->next!=null){
       temp = temp->next;
    }
    free(temp->next);
    temp-> next = nullptr;
    }
