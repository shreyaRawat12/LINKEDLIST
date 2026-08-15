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

 //traversing in linked list
 Node* temp = head;
    while(temp){
        cout<< temp->data << " ";
        temp = temp->next;
    }


    //length of the linked list
    Node* temp = head;
    int cnt=0;
    while(temp){
        temp = temp->next;
        cnt++;
    }
    //return cnt;
 return head;

 //searching in linked list 
int searching(Node* head,int val ){
 if(temp->data==val){
    return 1;
    else 
    return 0;
 }
} //best case -> O(1) average -> O(N/2) worst case -> O(N)
//time complexity -> O(N) [of traverse and length both]