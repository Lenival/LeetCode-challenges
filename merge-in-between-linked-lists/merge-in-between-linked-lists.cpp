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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode *tempNode1(list1), *tempNode2;
        int i=0;
                
        for(i=0;i<(a-1);i++){
            tempNode1 = tempNode1->next;
        }
        
        tempNode2 = tempNode1->next;
        tempNode1->next = list2;
        
        while(tempNode1->next!=NULL){
            tempNode1 = tempNode1->next;
        }
        
        for(i;i<(b-1);i++){
            tempNode2 = tempNode2->next;
        }
        
        tempNode1->next = tempNode2->next;
        
        return list1;
    }
};