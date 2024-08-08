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

        unordered_map<ListNode* , int> m;

        ListNode* temp = head;

        while(temp != NULL){
            if(m.count(temp) != 0) {
                return 1;
            }

            m[temp]++;
            temp = temp->next;
        }
        return 0;
        
    }
};