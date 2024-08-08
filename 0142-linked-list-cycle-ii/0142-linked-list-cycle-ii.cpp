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
    ListNode *detectCycle(ListNode *head) {

        ListNode* ans = NULL;
         unordered_map<ListNode* , int> m;

        ListNode* temp = head;

        while(temp != NULL){
            if(m.find(temp) != m.end()) {
               ans = temp;
               break;
            }

            m[temp]++;
            temp = temp->next;
        }
      
         

         
        return ans;
    }
};