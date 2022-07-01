/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode* fast=head;
        ListNode* slow=head;
        while(slow)
        {
            slow=slow->next;
            if(fast && fast->next)
                fast=fast->next->next;
            if(slow && fast && slow==fast && slow->next!=NULL)
                return true;
        }
        return false;
    }
};