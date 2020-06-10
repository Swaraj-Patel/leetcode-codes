class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        
      
       if(!head)
           return NULL;
       if(head->next==NULL)
            return head;
        
       ListNode* odd=head;
       ListNode* even=head->next;
      ListNode* temp=head->next;
           
        
        while(even!=NULL){
            if(even->next!=NULL){
                odd->next=even->next;
                odd=even->next;

                even->next=odd->next;
                even=odd->next;
            }
            else
                break;
        }
        
        odd->next=temp;
    
    return head;
    
    
    
    }
    
};