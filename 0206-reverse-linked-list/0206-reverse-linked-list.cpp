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
        ListNode* prev = nullptr;
        ListNode* node1 = head;
        ListNode* node2 = head;
        while(node2){
            node2 = node1->next;
            node1->next = prev;
            prev = node1;
            node1 = node2;
            
        }
        return prev;
        
    }
};