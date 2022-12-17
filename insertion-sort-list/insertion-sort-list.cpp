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
        ListNode *res = new ListNode();
        ListNode *curr = head;
        while(curr != nullptr){
            ListNode *next = curr ->next;
            ListNode *prev = res;
            
            //check insertion spot
            while(prev -> next != nullptr && prev -> next -> val <= curr -> val)
                prev = prev -> next;
            
            //insert node
            curr -> next = prev -> next;
            prev -> next = curr;
            
            //iterate
            curr = next;
        }
        return res -> next;
        
    }
};