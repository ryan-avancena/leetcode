# NEED TO UNDERSTAND

class Solution(object):
    def isIsomorphic(self,s,t):
        """
        :type s: str
        :type t: str
        :rtype: bool
        """

        sMap = {}
        tMap = {}

        for c1,c2 in zip(s, t):
            if (c1 not in sMap) and (c2 not in tMap):
                sMap[c1] = c2 
                tMap[c2] = c1

            elif sMap.get(c1) != c2 or tMap.get(c2) != c1:
                return False

        # print(sCounter, tCounter)


def main():
    solution = Solution()
    testCases = [
        ("egg","add"),
        ("foo","bar"),
        ("paper","title")
    ]

    for testCase in testCases:
        result = solution.isIsomorphic(testCase[0],testCase[1])
        # print(result)


main()