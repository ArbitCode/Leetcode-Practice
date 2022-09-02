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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
        int count1 = 0, count2 = 0;
        
        ListNode *ptr1 = l1, *ptr2 = l2;
        while(ptr1 || ptr2){
            if(ptr1) count1++, ptr1 = ptr1 -> next;
            if(ptr2) count2++, ptr2 = ptr2 -> next;
        }
        
        ListNode *new_head = nullptr;
        if(count1 > count2) new_head = l1;
        else new_head = l2;
        
        ListNode *ptr = new_head;
        int carry = 0;
        ListNode *end = ptr;
        
        //till l1 == l2
        while(l1 && l2){
            int temp1 = l1 -> val;
            int temp2 = l2 -> val;
            int value = temp1 + temp2 + carry;
            ptr -> val = value % 10;
            carry = value / 10;
            if(!ptr -> next) end = ptr;
            ptr = ptr -> next;
            l1 = l1 -> next;
            l2 = l2 -> next;
        }
        // reached end but carry != 0 when l1 == l2
        if(!end -> next && carry != 0) {end -> next = new ListNode (carry); return new_head;}
        
        // l1 != l2 => ptr pointest to largest list
        while(ptr){
            int value = ptr -> val + carry;
            ptr -> val = value % 10;
            carry = value / 10;
            //reached end but carry != 0
            if(carry != 0 && !ptr->next) {ptr -> next = new ListNode (carry); return new_head;}
            ptr = ptr -> next;
        }
        
       return new_head; 
    }
};