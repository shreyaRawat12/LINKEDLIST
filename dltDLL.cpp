//deletion from the head
Node* deletehead(Node* head)
prev = head;
head = head -> next;
head -> back = nullptr;
prev - > next = nullptr;
free(prev);


// delete from the tail
tail = head; 
while(tail - > ! = null){
    tail = tail -> next;
    prev = tail -> back;
    prev - > next = nullptr ;
    tail -> back = nullptr;
    free(tail);
    
}

//delete the kth element 