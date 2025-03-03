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
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* temp=head;
        int count=0;
        // check k nodes exists
        while(count<k){
            if(temp==NULL){
                return head;
            }
            temp=temp->next;
            count++;
        }

        // recursively call rest LL
        ListNode* prevNode=reverseKGroup(temp, k);

        //revese groups
        temp=head; 
        count=0;
        while(count<k){
            ListNode* temp2=temp->next;
            temp->next=prevNode;

            prevNode=temp;
            temp=temp2;
            count++;
        }
        return prevNode;
    }
};