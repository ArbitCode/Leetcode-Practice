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
    ListNode *merge(ListNode *list1, ListNode *list2){
        ListNode dummyHead(0);
        ListNode *ptr = &dummyHead;
        while(list1 && list2){
            if(list1 -> val < list2 -> val){
                ptr -> next = list1;
                list1 = list1 ->next;
            }else{
                ptr -> next = list2;
                list2 = list2 -> next;
            }
            ptr = ptr -> next;
        }
        if(list1) ptr -> next = list1;
        else ptr -> next = list2;
        return dummyHead.next;
    }
    
    ListNode *getMidPrev(ListNode *head){
        ListNode *slow = nullptr;
        ListNode *fast = head;
        while(fast && fast -> next){
            slow = (slow == nullptr) ? head : slow -> next;
            fast = fast -> next -> next;
        }
        return slow;
    }
    
    ListNode* sortList(ListNode* head) {
        if(head ==nullptr || head -> next == nullptr ) return head;
        ListNode *midPrev = getMidPrev(head);
        ListNode *mid = midPrev -> next;
        midPrev -> next = nullptr;
        //list1(head, listPrev) list2(mid, end) 
        ListNode *left = sortList(head);
        ListNode *right = sortList(mid);
        
        return merge(left, right);
        
    }
};