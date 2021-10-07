"""
FileName: Fatpandac.py
Author: Fatpandac
Create: 2021/10/07
Description: Count the number appear most times.
"""

input()
numList  = list(map(int,input().split()))
numSet = sorted(set(numList))
numCount = list(map(numList.count,numSet))
for i in range(len(numCount)):
    if numCount[i] == max(numCount):
        print(numSet[i],numCount[i])
