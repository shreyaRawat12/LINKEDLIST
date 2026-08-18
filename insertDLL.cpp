//insertion before the head 
temp = head ;
prev = temp -> back;
head -> back = newNode;
newNode-> next = temp ;
newNode -> back = nullptr ;

