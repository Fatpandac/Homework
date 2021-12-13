input()
numList  = list(map(int,input().split()))
numSet = sorted(set(numList))
numCount = list(map(numList.count,numSet))
for i in range(len(numCount)):
    if numCount[i] == max(numCount):
        print(numSet[i],numCount[i])
