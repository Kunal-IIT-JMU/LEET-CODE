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
    ListNode* middleNode(ListNode* head) {
        int count =0;
        ListNode* temp = head;
        while(temp != NULL){
            count ++;
            temp = temp -> next;
        }
        int middle;
        if(count % 2 == 0 ){
            middle = count/2 + 1;
        }
        else{
            middle = count/2;
        }
        int i =0;
        temp = head;
        if(count%2==0){
            while(i!=middle-1){
                temp = temp -> next;
                i++;
            }
        }
        else{
            while(i!=middle){
                temp = temp -> next;
                i++;
            }
        }
        return temp;
    }
};
