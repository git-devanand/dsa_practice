#include<iostream>
using namespace std;

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
    void removeElement(int index,ListNode* &head){
        if(index==0){head=head->next; return;}
        int curr=0;
        ListNode* temp=head;
        while(curr!=index-1){
          temp=temp->next;  
          curr++;
        }
        temp->next= temp->next->next;
    
        
    }
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
        int count =0;
        ListNode*temp=head;
        while(temp->next!=NULL)
        {
            temp=temp->next;
            count++;
        }
        int  index=count+1-n;
        cout<<index;
    removeElement(index, head);
    return head;
        
    }
    
};