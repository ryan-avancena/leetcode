class Solution(object):
    def merge(self, intervals):

        """
        A lambda function is a small anonymous function.
        A lambda function can take any number of arguments, but can only have one expression.
        """

        # lambda sort by the starting value's in each sub-array
        # for example:
        #    [[1, 3], [2, 6], [8, 10], [15, 18]] -> [[1, 3], [2, 6], [8, 10], [15, 18]]

        intervals.sort(key = lambda i : i[0])
        output = [intervals[0]]

        for start,end in intervals[1:]:

            # lastEnd is used to access the last interval 
            # in the output list because indexing with -1 retrieves the last element of a list
            # this gets the second element of the last interval
           
            lastEnd = output[-1][1]

            if start <= lastEnd:
                output[-1][1] = max(lastEnd,end)
            else:
                output.append([start,end])

        return output
        
        # [1,5],[2,4] = [1,5]

def main():
    solution = Solution()

    testCases = [
        [[1,3],[8,10],[15,18],[2,6]],
        [[1,4],[4,5]],
    ]

    for testCase in testCases:
        result = solution.merge(testCase)
        print(result)


main()