class Solution(object):
    def twoSum(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: List[int]
        """
        
        nums_dict = {}

        for i in range(0,len(nums)):
            converse = target - nums[i]

            if converse in nums_dict:
                return [nums_dict[converse],i]
            
            nums_dict[nums[i]] = i

        return None
    

def main():
    solution = Solution() 

    testCases = [
        ([2,7,11,15],9),
        ([3,2,4],6),
        ([3,3],6),
    ]

    for nums,target in testCases:
        result = solution.twoSum(nums,target)
        print(result)

main()