class Solution(object):
    def isSubsequence(self, s, t):
        """
        :type s: str
        :type t: str
        :rtype: bool
        """
        i = 0
        j = 0

        while i < len(s) and j < len(t):
            if (s[i] == t[j]):
                i += 1
            j += 1

        if i == len(s):
            return True
        else:
            return False 

def main():
    solution = Solution()
    testCases = [
        ["abc","ahbgdc"],
        ["axc","ahbgdc"],
    ]

    for testCase in testCases:
        result = solution.isSubsequence(testCase[0],testCase[1])
        print(result)

main()