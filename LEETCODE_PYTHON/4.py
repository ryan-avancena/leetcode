class Solution(object):
    def findMedianSortedArrays(self, nums1, nums2):

        itr1 = 0
        itr2 = 0
        lenFirst = len(nums1)
        lenSecond = len(nums2)
        combined = []
 
        while itr1 < lenFirst and itr2 < lenSecond:
            # print("running")
            if (nums1[itr1] <= nums2[itr2]):
                combined.append(nums1[itr1])
                itr1 += 1
            else:
                combined.append(nums2[itr2])
                itr2 += 1

        if itr1 == lenFirst:
            while(itr2 < lenSecond):
                combined.append(nums2[itr2])
                itr2 += 1
        elif itr2 == lenSecond:
            while(itr1 < lenFirst):
                combined.append(nums1[itr1])
                itr1 += 1

        sizeCombined = len(combined)
        print(f"\n{combined}")

        if sizeCombined % 2 == 0:
            median = int(sizeCombined/2)
            result = (combined[median-1] + combined[median]) / 2.0
        else:
            median = (sizeCombined//2)
            result = combined[median]

        return result

def main():
    solution = Solution()

    testCases = [
        [[1,3],[2]],
        [[1,2],[3,4]],
        [[1,8],[2,6]],
    ]

    for testCase in testCases:
        result = solution.findMedianSortedArrays(testCase[0],testCase[1])
        print(result)
        
main()