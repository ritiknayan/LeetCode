/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {

        // unordered_map<ListNode* , int> m;

        // ListNode* temp = head;

        // while(temp != NULL){
        //     if(m.find(temp) != m.end()) {
        //         return 1;
        //     }

        //     m[temp]++;
        //     temp = temp->next;
        // }
        // return 0;

        if( head == NULL || head->next == NULL) return 0;
        

        ListNode* slow =head;
        ListNode* fast =head;

          while (fast != nullptr && fast->next != nullptr) {
        // Move slow one step
        slow = slow->next;
        // Move fast two steps
        fast = fast->next->next;

        // Check if slow and fast pointers meet
        if (slow == fast) {
            return true;  // Loop detected
        }
    }

         return 0;
        
    }
};