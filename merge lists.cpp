class solution{
    public:
    ListNode*mergeTwoLists(Listnode*head1,ListNode*head2){
        if(head1==NULL||Head2==NULL){
            return head1=NULL? head2:head1;
        }
        //case1
        if(head1->value<=head2->value){
            head1->next=mergeTwoLists(head1->next,head2);
            return head1;
        }
        else{
            head2->next=mergeTwoLists(head1,head2->next);
            return head2;
        }
    }

};