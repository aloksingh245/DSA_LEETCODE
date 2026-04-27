class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* ptr1 = l1;
        ListNode* ptr2 = l2;
        ListNode* prev = NULL;
        int carry = 0;

        while (ptr1 != NULL || ptr2 != NULL) {
            
    
            if (ptr1 == NULL) {
                prev->next = ptr2;
                ptr1 = ptr2;
                ptr2 = NULL;
            }

            int sum = ptr1->val + carry;

            if (ptr2 != NULL) {
                sum += ptr2->val;
                ptr2 = ptr2->next;
            }

            ptr1->val = sum % 10;
            carry = sum / 10;

            prev = ptr1;
            ptr1 = ptr1->next;
        }

    
        if (carry > 0) {
            prev->next = new ListNode(carry);
        }

        return l1;
    }
};