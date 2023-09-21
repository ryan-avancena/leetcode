class Solution(object):
    def addBinary(self, a, b):
        """
        :type a: str
        :type b: str
        :rtype: str
        """
        
        aInt = 0
        bInt = 0

        aPow = 0
        for i in range(len(a)-1,-1,-1):
            if a[i] == '1':
                aInt += pow(2,aPow)
            aPow += 1

        bPow = 0
        for j in range(len(b)-1,-1,-1):
            if b[j] == '1':
                bInt += pow(2,bPow)
            bPow += 1

        sum = aInt + bInt

        returnBin = ""
        
        if sum == 0:
            return "0"
        else:
            while sum > 0:
                remainder = sum % 2
                returnBin = str(remainder) + returnBin
                sum = sum // 2

        return returnBin


def main():
    solution = Solution()

    testCases = [
        ["11","1"],
        ["1010","1011"],
    ]

    for testCase in testCases:
        result = solution.addBinary(testCase[0],testCase[1])
        print()
        # print(result)

main()