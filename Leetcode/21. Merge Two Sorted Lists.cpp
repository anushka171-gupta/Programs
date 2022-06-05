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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode *p = l1;
        ListNode *q = l2;
        ListNode *r = NULL;
        ListNode *l3 = NULL;
        
        
        while(p != NULL && q != NULL) {
            if(p->val < q->val) {
                if(l3 == NULL) l3 = p;
                else r->next = p;
                r = p;
                p = p->next;
            }
            else if(p->val > q->val) {
                if(l3 == NULL) l3 = q;
                else r->next = q;
                r = q;
                q = q->next;
            }
            else{
                if(l3 == NULL) l3 = p;
                else r->next = p;
                r = p;
                p = p->next;
                r->next = q;
                r = q;
                q = q->next;
            }
        }
        while(p != NULL) {
            if(l3 == NULL) l3 = r = p;
            else {
                r->next = p;
                r = p;
            }
            p = p->next;
        }
        
        while(q != NULL) {
            if(l3 == NULL) l3 = r = q;
            else {
                r->next = q;
                r = q;
            }
            q = q->next;
        }
        
        return l3;
    }
};
