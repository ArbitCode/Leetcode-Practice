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
        delete ptr1;
        delete ptr2;
        ListNode *new_head = nullptr;
        if(count1 > count2) new_head = l1;
        else new_head = l2;
        
        ListNode *ptr = new_head;
        int carry = 0;
        ListNode *ptrPrev = ptr;
        while(l1 && l2){
            int temp1 = l1 -> val;
            int temp2 = l2 -> val;
            ptr -> val = (temp1 + temp2 + carry) % 10;
            carry = (temp1 + temp2 + carry) / 10;
            ptrPrev = (ptrPrev == ptr) ? ptr : ptrPrev->next;
            ptr = ptr -> next;
            l1 = l1 -> next;
            l2 = l2 -> next;
        }
        if(ptr == nullptr && carry != 0) {ptrPrev -> next = new ListNode (carry); return new_head;}
        while(ptr){
            int temp = ptr -> val;
            ptr -> val = (temp + carry ) % 10;
            carry = (temp + carry) / 10;
            if(carry != 0 && !ptr->next) {ptr -> next = new ListNode (carry); return new_head;}
            ptr = ptr -> next;
        }
        
        //if(carry != 0) ptr = new ListNode(carry);
        
       return new_head; 
    }
};