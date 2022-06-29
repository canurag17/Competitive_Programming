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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int l=0;
        ListNode* head2=head;
        while(head2)
        {
            l++;
            head2=head2->next;
        }
        int k=l-n;
        head2=head;
        ListNode* adj;
        if(k==0)
        {
            head2=head->next;
            head->next=NULL;
            delete(head);
            return head2;
        }
        else
        {
            adj=head2->next;
            int i=1;
            while(i<k)
            {
                head2=adj;
                adj=adj->next;
                i++;
            }
            head2->next=adj->next;
            adj->next=NULL;
            delete(adj);
            return head;
        }
        return head;
        
    }
};