SinglyLinkedListNode* deleteNode(SinglyLinkedListNode* llist, int position) {
    if(llist==nullptr)return nullptr;
    int index=0;
    if(position==0){
        llist = llist->next;
        return llist;}
    SinglyLinkedListNode *p = llist, *ptr = llist->next;
    while(index<position-1){
        p = p->next;
        ptr = ptr->next;
        index++;
    }
    p->next = ptr->next; 
    return llist;

}
