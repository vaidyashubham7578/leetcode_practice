/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* prev;
    Node* next;
    Node* child;
};
*/

class Solution {
public:
    Node* flatten(Node* head) {
        if(head==NULL) return head;
        Node* curr=head;
        while(curr!=NULL){
            Node* temp=curr->next;
            if(curr->child!=NULL){
                curr->next=flatten(curr->child);
                curr->next->prev=curr;
                curr->child=NULL;

                while(curr->next!=NULL){   // tail find
                    curr=curr->next;
                }

                if(temp!=NULL){    // attach tail with next ptr
                    curr->next=temp;
                    temp->prev=curr;
                }
            }


            curr=curr->next;
        }
        return head;
    }
};