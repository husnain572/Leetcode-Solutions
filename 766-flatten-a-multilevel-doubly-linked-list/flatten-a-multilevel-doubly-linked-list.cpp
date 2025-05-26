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
    if(head == NULL){
        return head;
    }
    Node* curr = head;
    while(curr != NULL){
        if(curr->child != NULL){
            Node* next = curr->next;
            curr->next = flatten(curr->child);
            curr->next->prev = curr;
            curr->child = NULL;

            // move curr to the tail of the flattened child list
            Node* temp = curr->next;
            while(temp->next != NULL){
                temp = temp->next;
            }

            // reconnect next
            if(next != NULL){
                temp->next = next;
                next->prev = temp;
            }
        }
        curr = curr->next;
    }
    return head;
}
};