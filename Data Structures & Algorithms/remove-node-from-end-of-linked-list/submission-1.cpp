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
        int len=0;
        ListNode* curr=head;
        while(curr!=nullptr){
            len+=1;
            curr=curr->next;
        }
        len=len-n;
        if(len==0) head=head->next;
        else{
            curr=head;
            while(len>1){
                curr=curr->next;
                len--;
            }
            ListNode* temp=curr->next;
            curr->next=temp->next;
            temp->next=nullptr;
        }
        return head;
    }
    
};
