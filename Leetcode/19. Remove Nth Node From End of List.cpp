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
        
        if(head->next == NULL && n == 1) return NULL;
        
        int c = 0;
        ListNode *p = head;
        
        while(p != NULL) {
            c++;
            p = p->next;
        }
        n = c - n;
        cout << c <<" "<< n;
        if(n == 0) return (head = head->next);
        p = head;
        for(int i = 1; i < n; i++, p = p->next);
        if(p->next != NULL)
            p->next = p->next->next;
        return head;
        
    }
};
