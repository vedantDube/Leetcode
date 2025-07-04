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
       ListNode* hA = headA;
       ListNode* hB = headB;

       while(hA!=hB){
        hA = hA->next;
        hB = hB->next;

        if(hA==hB){
            return hA;
        }
        if(hA==NULL){
            hA = headB;
        }
        if(hB==NULL){
            hB = headA;
        }
       }
       return hA;
    }
};