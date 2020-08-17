import math

def solve(bitLength, inputList):
    ans = 0
    ones, zeroes = 0,0
    for x in inputList:
        localOnes, localZeroes = 0,0
        localOnes = findOnes(x)
        localZeroes = bitLength - localOnes
        ones += localOnes
        zeroes += localZeroes
    if ones == zeroes:
        ans += 1
    return ans
def findOnes(x):
    ans = 0
    while x:
        ans = ans + (x&1)
        x = x>>1
    return ans

n = int(input())
inputList = list(map(int,input().split()))
bitLength = max(inputList).bit_length()
ans = 0
for i in range(n):
    for j in range(i,n):
        ans += solve(bitLength,inputList[i:j+1])
addZeroes = bitLength - ans.bit_length()
if ans == 0:
    addZeroes -= 1
ans = "{0:b}".format(ans)
ans = "0"*addZeroes + ans
print(ans)