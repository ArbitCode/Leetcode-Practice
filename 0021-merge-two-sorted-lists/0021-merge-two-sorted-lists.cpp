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
    void appendNode(ListNode **node, ListNode **tail){
        (*tail)->next = *node;
        *tail = *node;
        *node = (*node)->next;
    }
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode *L1 = list1;
        ListNode *L2 = list2;
        ListNode *dummyHead = new ListNode(-1);
        ListNode *tail = dummyHead;
        while(L1 && L2){
            appendNode(L1->val <= L2->val ? &L1 : &L2, &tail);
        }
        tail -> next = L1 ? L1 : L2;
        return dummyHead->next;
        
    }
};