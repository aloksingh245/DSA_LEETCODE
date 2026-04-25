/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    bool isPalindrome(ListNode* head) {

        //find middle element of the link list
        ListNode* slow=head;
        ListNode* fast=head;
        ListNode* prev=NULL;
        while(fast->next!=NULL && fast->next->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        //creating a reverse list from end to middle
        ListNode* middle=slow->next;
        while(middle!=NULL){
             ListNode* temp=middle->next;
             middle->next=prev;
             prev=middle;
             middle=temp;

        }
        //compering both the linklist
        while(prev!=NULL){
            if(prev->val!=head->val){
                return false;
            }
            prev=prev->next;
            head=head->next;
        }
        return true;
        
        
    }
};