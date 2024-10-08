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
    ListNode* findMiddle(ListNode* head){
        ListNode* slow = head;
         ListNode* fast = head->next;

         while(fast != NULL && fast->next != NULL){
            slow = slow->next;
            fast = fast->next->next;
         }

         return slow;

    }
    ListNode* mergeList(ListNode* left, ListNode* right){
        ListNode* dummy = new ListNode(-1);
        ListNode* temp = dummy;
        while(left != NULL && right != NULL){
            if(left->val < right->val){
                temp->next = left;
                temp = left;
                left = left->next;
            }else{
                temp->next = right;
                temp = right;
                right = right->next;
            }
        }
        while(left != NULL){
             temp->next = left;
                temp = left;
                left = left->next;

        }
        while(right != NULL){
            temp->next = right;
                temp = right;
                right = right->next;

        }
        return dummy->next;
    }
    ListNode* merge(ListNode* head){

        if(head == NULL || head->next == NULL) return head;
        ListNode* middle = findMiddle(head);
         ListNode* leftHead = head;
          ListNode* rightHead = middle->next;
          middle->next = NULL;
         
        leftHead =  merge(leftHead);
         rightHead =  merge(rightHead);

          return mergeList(leftHead,rightHead);

      
    }
    ListNode* sortList(ListNode* head) {

        // if(head == NULL || head->next == NULL) return head;

        // vector<int> v;
        // ListNode* temp = head;
        // while(temp != NULL){
        //     v.push_back(temp->val);
        //     temp = temp->next;
        // }

        // sort(v.begin(),v.end());

        // temp = head;
        // int index=0;
        // while(temp != NULL){
        //     temp->val = v[index];
        //     index++;
        //     temp = temp->next;
        // }

        // return head;

        ListNode* ans = merge(head);
        return ans;
        
    }
};