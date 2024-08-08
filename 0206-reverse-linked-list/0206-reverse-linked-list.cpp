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
    ListNode* reverseList(ListNode* head) {

        // stack<int> s;

        // ListNode* temp = head;
        // while(temp != NULL){
        //     int data = temp->val;
        //     s.push(data);
        //     temp= temp->next;
        // }

        // temp = head;
        // while(temp != NULL){
        //     int a = s.top();
        //     temp->val = a;
        //     s.pop();
        //     temp = temp->next;
        // }
        // return head;

        ListNode* temp = head;
        ListNode* prev = NULL;
       

        while(temp != NULL){
             ListNode* front = temp->next;
             temp->next = prev;  
             prev = temp;  
             temp = front; 
           } 
       
       
        return prev;
        
    }
};