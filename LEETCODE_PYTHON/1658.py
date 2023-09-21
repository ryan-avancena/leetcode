class Solution(object):
    def minOperations(self, nums, x):
        """
        :type nums: List[int]
        :type x: int
        :rtype: int
        """
        
        target = sum(nums) - x
        currentSum = 0
        max_window = -1
        left = 0
        
        for right in range(len(nums)):
            currentSum += nums[right]

            while left <= right and currentSum > target:
                currentSum -= nums[left]
                left += 1

            if currentSum == target:
                max_window = max(max_window, right - left + 1)

        if max_window == -1:
            return -1
        return len(nums) - max_window

        

    
def main():
    solution = Solution()

    testCases = [
        [[1,1,4,2,3],5],
        [[5,6,7,8,9],4],
        [[3,2,20,1,1,3],10],
    ]

    for testCase in testCases:
        result = solution.minOperations(testCase[0],testCase[1])
        print(result)

main()