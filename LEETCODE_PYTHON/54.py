class Solution(object):
    def spiralOrder(self, matrix):
        """
        :type matrix: List[List[int]]
        :rtype: List[int]
        """
        
        rows = len(matrix)
        columns = len(matrix[0])

        leftBound = 0
        rightBound = columns-1
        topBound = 0
        bottomBound = rows-1

        Xiterator = 0
        yIterator = 0

        returnArr = []

        # print(matrix[0][1])

        # overall loop
        while(topBound <= bottomBound):
            # if leftBound == topBound:
            while(Xiterator < rightBound):
                returnArr.append(matrix[topBound][Xiterator])
                Xiterator += 1
            topBound += 1

            # SWITCH DIRECTIONS AND GOING DOWN
            if Xiterator == rightBound:
                while(yIterator < bottomBound):
                    returnArr.append(matrix[yIterator][rightBound])
                    yIterator += 1
                rightBound -= 1


            # print(yIterator)
            # GOING LEFT
            if yIterator == bottomBound:
                while(Xiterator >= leftBound):
                    # print(matrix[bottomBound][Xiterator])
                    returnArr.append(matrix[bottomBound][Xiterator])
                    Xiterator -= 1
                bottomBound -= 1
                Xiterator += 1

            # print(Xiterator)

            if Xiterator == leftBound:
                # print("running")
                while(yIterator < topBound):
                    returnArr.append(matrix[yIterator][leftBound])
                    yIterator -= 1
                leftBound += 1

            print(f"x-iter:{Xiterator}\ny-iter:{yIterator}\ntopBound:{topBound}\nbotBound:{bottomBound}\nleftBound:{leftBound}\nrightBound:{rightBound}\n")
                
            

        print(returnArr)


def main():
    solution = Solution()

    testCases = [
        [[1,2,3],
        [4,5,6],
        [7,8,9]],

        [[1,2,3,4],
         [5,6,7,8],
         [9,10,11,12]]
    ]

    for testCase in testCases:
        result = solution.spiralOrder(testCase)

    
    

main()