class Solution(object):
    def longestOnes(self, nums, k):
        """
        :type nums: List[int]
        :type k: int
        :rtype: int
        """
        maxConsecutiveOnes = 0
        flips = k
        left = 0

        for right,num in enumerate(nums):

            # if num == 1, then flips -= 0
            # else, then flips -= 1
            flips -= (1 - num)

            # if flips hit zero, start moving left
            if flips < 0: 
                flips += 1 - nums[left]
                left += 1
            else:
                maxConsecutiveOnes = max(maxConsecutiveOnes, right - left + 1)


        return maxConsecutiveOnes



def main():
    solution = Solution()

    testCases = [
        [[1,1,1,0,0,0,1,1,1,1,0],2],
        [[0,0,1,1,0,0,1,1,1,0,1,1,0,0,0,1,1,1,1],3]
    ]

    for testCase in testCases:
        result = solution.longestOnes(testCase[0],testCase[1])
        print(result)
        # print()

main()