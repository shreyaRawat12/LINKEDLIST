#include<bits/stdc++.h>
using namespace std;
struct Node {
    public: 
    int data;
    Node* next;
    public:
    Node(int data1 , Node* next1, Node* prev1){
        data = data1;
        next = next1;
        prev = prev1;
    }
 };

 //connecting with the prev node 
 Node* head = new Node(arr[0]){
    Node* prev = head;
    for(int i = 0; i<n-1; i++){
        Node* head = new Node(arr[i], nullptr,prev);
        prev -> next = temp;
        prev = temp;
    }
    return head;
 }