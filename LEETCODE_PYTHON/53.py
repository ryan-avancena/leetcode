

class Solution(object):
    def maxSubArray(self, A):
        if not A:
            return 0

        # everything is set to A[0]
        curSum = maxSum = A[0]

        # the loop will iterate over each element of the sequence A excluding the first element
        # the loop variable num will take on each of these values in each iteration of the loop
        
        for num in A[1:]:
            curSum = max(num, curSum + num)
            maxSum = max(maxSum, curSum)

        return maxSum
    
def main():
    solution = Solution()

    testCases = [
        [-2,1,-3,4,-1,2,1,-5,4],
        [1],
        [5,4,-1,7,8],
        [-1],
        [-1,-2],
    ]

    for testCase in testCases:
        result = solution.maxSubArray(testCase)
        print(result)

main()