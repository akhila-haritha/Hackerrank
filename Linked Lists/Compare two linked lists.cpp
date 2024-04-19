bool compare_lists(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {
    if(head1==nullptr && head2==nullptr)return true;
    if((!head1 && head2) || (head1 && !head2))return false;
    if(head1->data != head2->data)return false;
    return compare_lists(head1->next,head2->next);
    


}
