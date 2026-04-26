class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
        if(head == NULL){
            return NULL;
        }

        ListNode* ptr = head;
        int count = 0;

        // count all nodes
        while(ptr != NULL){
            count++;
            ptr = ptr->next;
        }

        // remove head
        if(count == n){
            return head->next;
        }

        int removing_node = count - n;

        ptr = head;

        // go to previous node
        for(int i = 1; i < removing_node; i++){
            ptr = ptr->next;
        }

        // remove nth node
        ptr->next = ptr->next->next;

        return head;
    }
};