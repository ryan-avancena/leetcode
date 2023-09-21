class Solution(object):
    def romanToInt(self, s):
        """
        :type s: str
        :rtype: int
        """

        romanDict = {
            "I":1,
            "V":5,
            "X":10,
            "L":50,
            "C":100,
            "D":500,
            "M":1000,
        }

        length = len(s)
        ans = 0
        for i in range(length-1):
            if (romanDict[s[i]] < romanDict[s[i+1]]):
                ans -= romanDict[s[i]]
            else:
                ans += romanDict[s[i]]

        ans += romanDict[s[length - 1]]  # Add the last character's value
        
        return ans 

def main():
    solution = Solution()
    testCases = [
        "III",
        "LVIII",
        "MCMXCIV"
    ]

    for s in testCases:
        result = solution.romanToInt(s)
        print(result)

main()