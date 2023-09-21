class Solution(object):
    def plusOne(self, digits):
        """
        :type digits: List[int]
        :rtype: List[int]
        """
        
        size = len(digits) - 1

        while (size >= 0):
            if digits[size] == 9:
                digits[size] = 0
            else:
                digits[size] += 1
                return digits
            size -= 1

        digits.insert(0,1)
        return digits



def main():
    solution = Solution()

    testCases = [
        [9],
        [9,9],
        [1,0,0],
        [3,2,0],
        [5],
    ]

    for testCase in testCases:
        returnVal = solution.plusOne(testCase)
        for digit in returnVal:
            print(digit,end="")
        print()


main()