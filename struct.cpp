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
 Node* converttoLL(vector<int> &arr){
    Node* head = new Node(arr[0]);
    Node* mover = head;
    for(int i = 1; i<arr.size(); i++){
        Node* temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp ; //or we can also write mover->temp;
    }
    return head;
 }
 int main(){
    vector<int> arr = {2,4,6,7};
    Node* head = converttoLL(arr);
    cout << head->data;
 }