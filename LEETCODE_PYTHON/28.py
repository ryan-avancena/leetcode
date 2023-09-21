class Solution(object):
    def strStr(self, haystack, needle):
        """
        :type haystack: str
        :type needle: str
        :rtype: int
        """

        lenNeedle = len(needle)
        lenHaystack = len(haystack)    

        for i in range(lenHaystack - lenNeedle + 1):
            if (haystack[i] == needle[0]):
                for j in range(lenNeedle):
                    if (haystack[i+j] != needle[j]):
                        break
                    elif (j == lenNeedle-1):
                        return i

        return -1

    # 7 - 2

def main():
    solution = Solution()
    testCases = [
        ["sadbutsad","sad"],
        ["leetcode","leeto"],
        ["penishi","hi"],
        ["rainisgay","isg"],
    ]

    for testCase in testCases:
        result = solution.strStr(testCase[0],testCase[1])
        # print()
        print(result)

main()