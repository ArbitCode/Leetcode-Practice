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
    ListNode *merge(ListNode *list1, ListNode*list2){
        ListNode dummy(0);
        ListNode *ptr = &dummy;
        while(list1 && list2){
            if(list1 -> val < list2 -> val){
                ptr -> next = list1;
                list1 = list1 -> next;
            }else{
                ptr -> next = list2;
                list2 = list2 -> next;
            }
            ptr = ptr -> next;
        }
        
        if(list1) ptr -> next = list1;
        else ptr -> next = list2;
        
        return dummy.next;
    }
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        int k = lists.size();
        if(k==0) return nullptr;
        ListNode *temp = lists[0];
        //if(temp == nullptr) return temp;
        for(int i = 1; i < k; i++){
            temp = merge(temp, lists[i]);
        }
        return temp;
        
    }
};