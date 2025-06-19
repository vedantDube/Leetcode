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
    ListNode* middleNode(ListNode* head) {
        int len = 0;
          ListNode *temp = head;
        while(head!=NULL){
            len++;
            head = head->next;
        }
      
        int count = 0;
        while(count<len/2){
            temp = temp->next;
            count++;
        }
        return temp;
    }
};