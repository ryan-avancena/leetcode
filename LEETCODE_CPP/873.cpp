#include "leetcode.h"

class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode *slow = head;
        ListNode *fast = head;
        while (fast != nullptr && fast->next != nullptr) {
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
        
    }
};

int main() {
    ListNode *head = new ListNode(0);;
    head->next = new ListNode(1);
    head->next->next = new ListNode(2);
    head->next->next->next = new ListNode(3);
    head->next->next->next->next = new ListNode(4);
    head->next->next->next->next->next = new ListNode(5);
    head->next->next->next->next->next->next = new ListNode(6);

    Solution solution;
    ListNode *current = solution.middleNode(head);
    
    while(current != nullptr) {
        cout << current->val << " ";
        current = current->next;
    }


    return 0;
}