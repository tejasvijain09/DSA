void deleteFromBeg(Node** head){
if(*head == NULL){
    cout<<"No element is to be deleted.";
}else{
    *head = *head -> next;
}
}