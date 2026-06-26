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
        ListNode* temp=head;
        int c=0;
        while(temp){
            temp=temp->next;
            c++;
        }
        if(c==n){
            return head->next;
        }
        int k=c-n;
        ListNode* temp1=head;
        int d=1;
        while(temp1&&temp1->next){
            if(k==d){
                temp1->next=temp1->next->next;
            }
            else{
                temp1=temp1->next;
            }
            d++;
        }
        return head;
    }
};