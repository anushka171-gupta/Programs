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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        priority_queue<int, vector<int>, greater<int>> q;
        for(int i = 0; i < lists.size(); i++) {
            ListNode *p = lists[i];
            while(p) {
                q.push(p->val);
                p = p->next;
            }
        }
        ListNode *res = new ListNode();
        ListNode *t = res;
        while(!q.empty()) {
            res->next = new ListNode(q.top());
            res = res->next;
            q.pop();
        }
        t = t->next;
        return t;
    }
};
