SinglyLinkedListNode* insertNodeAtTail(SinglyLinkedListNode* head, int data) {
    SinglyLinkedListNode *new_node = new SinglyLinkedListNode(data);
    if(head==nullptr)return new_node;
    SinglyLinkedListNode *temp = head;
    while(temp->next != nullptr){
        cout<<temp->data<<endl;
        temp = temp->next;}
    temp->next = new_node;
    
    return head;
      
	

}
