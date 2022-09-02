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
    ListNode* rotateRight(ListNode* head, int k) {
        //count
        int n = 0;
        ListNode *count = head;
        while(count){
            count = count -> next;
            n++;
        }
        //if n == 0
        if(n == 0) return nullptr;
        k  = k % n;
        
        //k == 0
        if(k == 0) return head;
        
        //k > 0
        ListNode *fast = head;
        for(int i = 0; i < k; i++) fast = fast -> next;
        ListNode *slow = head;
        while(fast -> next){
            slow = slow -> next;
            fast = fast -> next;
        }
        ListNode *temp = slow -> next;
        fast -> next = head;
        slow -> next = nullptr;
        return temp;
        
    }
};