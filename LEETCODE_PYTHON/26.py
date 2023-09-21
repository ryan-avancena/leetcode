from typing import List

class Solution:
    def removeDuplicates(self, nums: List[int]) -> int:
        size = len(nums)
        count = 0

        idx = 1
        while idx < size:
            if nums[idx] == nums[idx - 1]:
                count += 1
            else:
                nums[idx - count] = nums[idx]
            idx += 1

        return size - count
    

def main():
    solution = Solution()

    testCases = [
        [1,1,2],  # 2
        [0,0,1,1,1,2,2,3,3,4],  # 5
    ]


main()