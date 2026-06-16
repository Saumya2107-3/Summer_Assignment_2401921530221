#include <iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
private:
    
    ListNode* reverseList(ListNode* head) {
        ListNode* prev = NULL;
        ListNode* curr = head;
        while (curr != NULL) {
            ListNode* forward = curr->next;
            curr->next = prev;
            prev = curr;
            curr = forward;
        }
        return prev;
    }

public:
    bool isPalindrome(ListNode* head) {
        if (head == NULL || head->next == NULL) return true;
        
        // Step 1: Middle 
        ListNode* slow = head;
        ListNode* fast = head;
        while (fast != NULL && fast->next != NULL) {
            slow = slow->next;
            fast = fast->next->next;
        }
        
        
        ListNode* secondHalfHead = reverseList(slow);
        ListNode* firstHalfHead = head;
        
        
        ListNode* temp = secondHalfHead; 
        while (temp != NULL) {
            if (firstHalfHead->val != temp->val) {
                return false; 
            }
            firstHalfHead = firstHalfHead->next;
            temp = temp->next;
        }
        
        return true;
    }
};