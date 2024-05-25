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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* temp= head;
        int count = 0;
        while(temp->next!= nullptr){
            temp= temp->next;
            count ++;
            
        }
            ListNode* curr= head;
            ListNode* prev= nullptr;
            // int x= 1;
            int k= (count-n)+1;
            for(int i = 0;i<k; i++){
                prev = curr;
                curr=curr->next;
                
            }
            if(prev==nullptr){
                head= head->next;

            }
            else{
                prev->next = curr->next;
                curr->next = nullptr;
                delete curr;
            }
      
          return head;
    }
};