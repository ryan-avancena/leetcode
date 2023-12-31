class Solution:
    def lengthOfLongestSubstring(self, s):
        n = len(s)
        ans = 0
        # mp stores the current index of a character
        mp = {}

        i = 0
        # try to extend the range [i, j]
        for j in range(n):
            if s[j] in mp:
                i = max(mp[s[j]], i)
            else:
                ans = max(ans, j - i + 1)
                mp[s[j]] = j + 1

        return ans


def main():
    solution = Solution()
    testCases = [
        "abcabcbb",
        "bbbbb",
        "pwwkew"
    ]

    for s in testCases:
        result = solution.lengthOfLongestSubstring(s)
        print(result)


main()