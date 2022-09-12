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
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(head==NULL or k==1) return head;
        
        ListNode* dummy = new ListNode();
        dummy->next = head;
        
        ListNode* curr = dummy, *nex = dummy, *pre = dummy;
        int len=0;
        while(curr->next){
            len++;
            curr = curr->next;
        }
        
        while(len>=k){
            curr = pre->next;
            nex = curr->next;
            for(int i=1;i<k;i++){
                curr->next = nex->next;
                nex->next = pre->next;
                pre->next = nex;
                nex = curr->next;
            }
            len -= k;
            pre = curr;
        }
        
        return dummy->next;
    }
};