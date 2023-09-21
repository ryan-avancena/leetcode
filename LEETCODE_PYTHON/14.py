class Solution:
    def longestCommonPrefix(self, strs):

        # takes multiple arguments and returns iterator that generates tuples
        # *strs - unpacks all elements of strs
        # EXAMPLE:
        # strs = ["abc", "def", "ghi"]
        # l = [('a', 'd', 'g'), ('b', 'e', 'h'), ('c', 'f', 'i')]

        l = list(zip(*strs))
        prefix = ""

        # print(l)

        for i in l:
            # makes set of elements for the chars
            # in this case, if all tuples in l have the specific char at `i`
            # if true, prefix adds first element of the set `i` which be just 1 char 
            
            # print(set(i))
            # print(len(set(i)))
            
            if len(set(i))==1:
                prefix += i[0]
            else:
                break
        
        return prefix
    

def main():
    solution = Solution() 

    testCases = [
        ["flower","flow","flight"],     # "fl"
        ["dog","racecar","car"],        # ""
        ["flower","flow","owl"],        # ""
    ]

    for testCase in testCases: 
        result = solution.longestCommonPrefix(testCase)
        print(result)
        # print()

main()
