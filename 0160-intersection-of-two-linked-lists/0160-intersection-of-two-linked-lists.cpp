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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {

        

        if(headA == NULL || headB == NULL) return NULL;

    //     while(headB != NULL) {
    //     ListNode* temp = headA;
    //     while(temp != NULL) {
    //         //if both nodes are same
    //         if(temp == headB) return headB;
    //         temp = temp->next;
    //     }
    //     headB = headB->next;
    // }
    // //intersection is not present between the lists return null
    // return NULL;
    unordered_set<ListNode*> st;

    ListNode* temp = headA;
    while(temp != NULL){
        st.insert(temp);
        temp = temp->next;
    }

    ListNode* temp2 = headB;
    while(temp2 != NULL){
        if(st.find(temp2) != st.end()) return temp2;
        temp2 =temp2->next;
    }

    return NULL;
        
    }
};