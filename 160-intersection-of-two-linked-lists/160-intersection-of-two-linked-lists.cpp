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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        stack<ListNode*> s1,s2;
        if(headA==headB)
            return headA;
        ListNode* headext=headB;
        while(headext->next)
        {
            headext=headext->next;
            if(headext==headA)
                return headA;
        }
        while(headA)
        {
            s1.push(headA);
            headA=headA->next;
            if(headA==headB)
                return headA;
        }
            
        while(headB)
        {
            s2.push(headB);
            headB=headB->next;
        }
        ListNode* common=NULL;
        while(!s1.empty() && !s2.empty())
        {
            if(s1.top()!=s2.top())
            {
                return common;
            }
            common=s1.top();
            s1.pop();
            s2.pop();
        }
        return common;
        
    }
};