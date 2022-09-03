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
        ListNode *rev_head = nullptr;
        ListNode *currentNode = head;
        
        while(currentNode != nullptr){
            ListNode *next = currentNode -> next;
            currentNode -> next = rev_head;
            rev_head = currentNode;
            currentNode = next;
        }
        
        return rev_head;
        
    }
};