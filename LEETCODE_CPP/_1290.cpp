#include "leetcode.h"

class Solution {
public:
    int getDecimalValue(ListNode* head) {
        int s=0;
        while(head!=NULL){
            // cout << head->val << " ";
            s=s*2+head->val;
            head=head->next;
        }
        return s;
    }
};

int main () {
    Solution solution; 

    ListNode* head = new ListNode(1);
    head->next = new ListNode(0);
    head->next->next = new ListNode(1);

    int result = solution.getDecimalValue(head);
    // cout << result; 

    return 0;
}

/*
class Solution {
public:
    int getDecimalValue(ListNode* head) {
        int returnVal = 0, count = 0;
        while(head != nullptr) {
            if (head->val == 1) {
                returnVal += pow(2,count); 
            }
            count++;
            head = head->next;
        }
        return returnVal;
    }
};
*/