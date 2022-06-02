class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int c = 0;
        ListNode* res = new ListNode();
        ListNode *p = l1, *q = l2, *temp = res;
        while(p && q) {
            int sum = p->val + q->val + c;
            c = sum / 10;
            sum %= 10;
            // cout << sum << " " << c << "\n";
            temp->next = new ListNode(sum);
            temp = temp->next;
            p = p->next;
            q = q->next;
        }
        while(p) {
            int sum = p->val + c;
            c = sum / 10;
            sum %= 10;
            temp->next = new ListNode(sum);
            temp = temp->next;
            p = p->next;
        }
        while(q) {
            int sum = q->val + c;
            c = sum / 10;
            sum %= 10;
            temp->next = new ListNode(sum);
            temp = temp->next;
            q = q->next;
        }
        if(c) {
            temp->next = new ListNode(c);
        }
        return res->next;
    }
};
