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
    ListNode* reverseList(ListNode* head) {
        if(head == NULL) return head;

        vector<ListNode*> nodes;
        ListNode* temp = head;
        while(temp != NULL) {
            nodes.push_back(temp);
            temp = temp->next;
        }
        int left = 0;
        int right = nodes.size() - 1;

        while(left < right) {
            swap(nodes[left]->val, nodes[right]->val);
            left++;
            right--;
        }

        return head;
    }
};
