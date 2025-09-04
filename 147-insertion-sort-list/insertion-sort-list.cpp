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
    ListNode* insertionSortList(ListNode* head) {
        vector<int> ans;
        ListNode* t = head;
        while(t){
            ans.push_back(t -> val);
            t = t->next;
        }
        if(ans.size() <= 1) return head;
        t = head;
        int i=0;
        sort(ans.begin(), ans.end());
        while(t){
            t->val = ans[i];
            i++;
            t = t -> next;
        }
        return head;
    }
};