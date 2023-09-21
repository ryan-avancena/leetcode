# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

class ListNode(object):
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next

class Solution(object):
    def addTwoNumbers(self, l1, l2):
        """
        :type l1: ListNode
        :type l2: ListNode
        :rtype: ListNode
        """
        
        returnList = ListNode()
        current = returnList

        carry = 0

        while l1 or l2:
            if l1:
                value1 = l1.val
            # else:
            #     value1 = 0

            if l2:
                value2 = l2.val
            # else:
            #     value2 = 0

            sumNode = value1 + value2 + carry

            # updates carry
            carry = sumNode // 10
            sumNode = sumNode % 10

            current.next = ListNode(sumNode)
            current = current.next

            # IF THE LINKED LISTS CONTINUE
            if l1 is not None:
                l1 = l1.next
            if l2 is not None:
                l2 = l2.next

        # for cases like 99 -> 100
        if carry:
            current.next = ListNode(carry)

        return returnList.next


def printLinkedList(head):
    current = head
    while current is not None:
        print(current.val, end=" ")
        current = current.next

def main():
    solution = Solution()

    head1 = ListNode(2)
    head1.next = ListNode(4)
    head1.next.next = ListNode(3)

    head2 = ListNode(5)
    head2.next = ListNode(6)
    head2.next.next = ListNode(4)

    result = solution.addTwoNumbers(head1,head2)

    printLinkedList(result)

    


main()