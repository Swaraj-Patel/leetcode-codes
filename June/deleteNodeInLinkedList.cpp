class Solution {
public:
    void deleteNode(ListNode* node) {
        ListNode* key=node;
        ListNode* temp=node->next;
        
            key->val=temp->val;
            key->next=temp->next;
            delete temp;
        
        
    }
};