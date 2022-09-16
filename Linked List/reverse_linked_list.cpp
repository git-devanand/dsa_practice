#include<iostream>
using namespace std;

/**
 * Definition for singly-linked list.*/
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
  };
 

class ListNode {
public:
    int data;
    ListNode* next;
};

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* prev = NULL;
        ListNode* curr = head;

        while(curr != NULL){
            ListNode* forward = curr->next;
            prev = curr;
            curr = forward;
        }

        return curr;
    }
};

int main()
{

}