#include "leetcode.h"
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        vector<int> listToArray;

        ListNode *temp = head;

        while(temp != nullptr) {
            listToArray.push_back(temp->val);
            temp = temp->next;
        }

        int sizeList = listToArray.size(); 
        int front = 0, back = sizeList-1;

        while (front < back) {
            if (listToArray[front] != listToArray[back]) {
                return false;
            } 
            front++;
            back--;
        }
        
        return true;
    }
};

int main() {
    Solution solution;

    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(2);
    head->next->next->next = new ListNode(1);

    // ListNode* temp = head;
    // while(temp != nullptr) {
    //     cout << temp->val << " ";
    //     temp = temp->next;
    // }

    cout << solution.isPalindrome(head);

    


    return 0;
}