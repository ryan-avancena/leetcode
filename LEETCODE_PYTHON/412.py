class Solution(object):
    def fizzBuzz(self,n):
        """
        :type n: int
        :rtype: List[str]
        """

        returnArr = []

        for i in range(1,n+1):
            if (i % 3 == 0) and (i % 5 == 0):
                returnArr.append("FizzBuzz")
            elif i % 5 == 0:
                returnArr.append("Buzz")
            elif i % 3 == 0:
                returnArr.append("Fizz")
            else:
                returnArr.append(str(i))

        return returnArr

def main():
    solution = Solution()

    testCases = [
        3,
        5,
        15,
    ]

    for testCase in testCases:
        result = solution.fizzBuzz(testCase)
        print(result)

main() 