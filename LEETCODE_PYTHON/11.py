# NOTES
# MOST RECENT TRY - (08/13)
# SOLVED BUT TOOK SOME NOTES - 1 HR, SHOULD RETAKE AND BE MORE EFFICIENT

class Solution(object):
    def maxArea(self, height):
        """
        :type height: List[int]
        :rtype: int
        """

        maxLeft = 0
        maxArea = 0
        maxRight = len(height)-1
        
        while(maxLeft <= maxRight):

            # print(f"maxLeft: {maxLeft}")
            # print(f"maxRight: {maxRight}")

            minVal = min(height[maxLeft],height[maxRight])
            if (max(height[maxLeft],height[maxRight]) == height[maxLeft]):
                maxRight -= 1
            elif (max(height[maxLeft],height[maxRight]) == height[maxRight]):
                maxLeft += 1

            if (maxArea < (minVal*(maxRight-maxLeft+1))):
                maxArea = minVal*(maxRight-maxLeft+1)

            # print(maxArea)

        return maxArea

        # for i in range(maxLeft,maxRight):
        #     minVal = min(maxLeft,maxRight)


def main():
    solution = Solution()
    testCases = [
        [1,8,6,2,5,4,8,3,7],    # 49
        [1,1],                  # 1
        [1,20,2,5,19,8,3,7],    # 57
    ]

    for testCase in testCases:
        result = solution.maxArea(testCase)
        print(result)

main()