#include "leetcode.h"


class Solution {
public:
    ListNode* deleteNodes(ListNode* head, int m, int n) {
        ListNode* iter = head;
        int count = 1;
        int i = 0; 

        while(iter != nullptr) {

            // only runs if count is == to turns passed  
            if (count == m) {

                // iterates through linked list and deletes n times
                while(i < n && iter->next != nullptr) { 

                    // deletes nodes and increments i
                    ListNode *temp = iter->next;
                    // cout << "delete : " << temp->val << endl;  
                    
                    iter->next = temp->next;
                    i++;

                    delete temp; 
                }

                // resets counters
                count = 0;
                i = 0;

            } 

            iter = iter->next;
            count++;
        }

        return head; 
    }
};

void printList(ListNode* head) {
    ListNode* current = head;
    while (current) {
        std::cout << current->val << " ";
        current = current->next;
    }
    std::cout << std::endl;
}

int main () {
    // Create a sample linked list: 1 -> 2 -> 3 -> 4 -> 5
    ListNode* head = new ListNode{1, nullptr};
    ListNode* tail = head;

    for (int i = 2; i <= 15; ++i) {
        tail->next = new ListNode{i, nullptr};
        tail = tail->next;
    }

    printList(head);

    Solution solution;

    solution.deleteNodes(head,2,3);

    printList(head);

    return 0;
}