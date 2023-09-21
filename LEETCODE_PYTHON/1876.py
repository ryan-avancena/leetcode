class Solution(object):
    def countGoodSubstrings(self, s):
        """
        :type s: str
        :rtype: int
        """
        
        countSubstrings = 0

        if len(s) < 3:
            return 0

        for i in range(1,len(s)-1):
            left = s[i-1]
            right = s[i+1]
            if s[i] != left and s[i] != right and left != right:
                countSubstrings += 1

        return countSubstrings



def main():
    solution = Solution()

    testCases = [
        "xyzzaz",
        "aababcabc",
    ]

    for testCase in testCases:
        result = solution.countGoodSubstrings(testCase)
        print(result)

main()