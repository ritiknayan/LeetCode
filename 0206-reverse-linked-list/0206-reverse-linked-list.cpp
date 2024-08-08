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
    ListNode* recusiveReverse(ListNode* head){

        if(head == NULL || head->next == NULL){
            return head;
        }
       
        ListNode* newHead =  recusiveReverse(head->next);
        ListNode* front = head->next;
        front->next = head;
        head->next = NULL;

        return newHead;

    }
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

        // ListNode* temp = head;
        // ListNode* prev = NULL;
       

        // while(temp != NULL){
        //      ListNode* front = temp->next;
        //      temp->next = prev;  
        //      prev = temp;  
        //      temp = front; 
        //    } 
       
       
        // return prev;

        ListNode* ans = recusiveReverse(head);
        return ans;
        
    }
};