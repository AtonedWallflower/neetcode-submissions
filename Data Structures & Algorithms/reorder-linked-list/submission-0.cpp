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
    void reorderList(ListNode* head) {
       vector<ListNode*> arr;
       ListNode* curr=head;
       while(curr!=nullptr){
        arr.push_back(curr);
        curr=curr->next;
       }
       int n=arr.size();
       int i=0,j=n-1;
       while(i<j){
        head->next=arr[j];
        head=head->next;
        head->next=arr[i+1];
        head=head->next;
        i++;
        j--;
       } 
       head->next=nullptr;
    }
};
