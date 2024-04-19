SinglyLinkedListNode* insertNodeAtPosition(SinglyLinkedListNode* llist, int data, int position) {
    SinglyLinkedListNode *new_node = new SinglyLinkedListNode(data);
    if(llist==nullptr)return nullptr;
    int index = 0;
    SinglyLinkedListNode *p = llist,*ptr= llist->next;
    while(index<position-1){
        p = p->next;
        ptr=ptr->next;
        index++;
    }
    p->next = new_node;
    new_node->next = ptr;
    return llist;
    

}
