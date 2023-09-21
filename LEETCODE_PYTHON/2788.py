# Input: words = ["one.two.three","four.five","six"], separator = "."
# Output: ["one","two","three","four","five","six"]

class Solution(object):
    def splitWordsBySeparator(self, words, separator):
        """
        :type words: List[str]
        :type separator: str
        :rtype: List[str]
        """

        rList = []

        for word in words:
            
            #iterates but splits by the separator
            for i in word.split(separator):
                if i:
                    rList.append(i)

        return rList

def main():
    solution = Solution()

    testCases = [
        [["one.two.three","four.five","six"],"."],
        [["$easy$","$problem$"],"$"],
        [["|||"],"|"],
    ]

    for testCase in testCases:
        result = solution.splitWordsBySeparator(testCase[0],testCase[1])
        print(result)


main()