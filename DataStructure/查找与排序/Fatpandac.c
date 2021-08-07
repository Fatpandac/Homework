#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MaxSize 1000000

int SqSearch(int *list,int n,int searchKey)
{
    for (int i = 0; i < n; i++)
    {
        if (list[i] == searchKey)
        {
            return i;
        }
    }
}

int QuickSort(int *list,int start,int end)
{
    int i = start,j = end;
    int tmp;
    if (start < end)
    {
        tmp = list[start];
        while (i != j)
        {
            while (j > i && list[j] >= tmp)
            {
                j--;
            }
            list[i] = list[j];
            while (i < j && list[i] <= tmp)
            {
                i++;
            }
            list[j] = list[i];
        }
        list[i] = tmp;
        QuickSort(list,start,j - 1);
        QuickSort(list,i + 1,end); 
    }
}

int BinSearch(int *list,int n,int searchKey)
{
    int low = 0,high = n-1,mid;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (list[mid] == searchKey)
        {
            return mid + 1;
        }else if (list[mid] > searchKey)
        {
            high =  mid - 1; 
        }else{
            low = mid + 1;
        }
    }
    return 0;
}

void DispList(int *list)
{
    for (int i = 0; i < MaxSize; i++)
    {
        printf("%3d ",list[i]);
    }
    printf("\n");
}

void CountRunTime (int Func(),char funcName[],int *list,int n,int m) {
    time_t satrtTime,endTime;
    satrtTime = clock();
    printf("%s find index is %d\n",funcName,Func(list,n,m));
    endTime = clock();
    printf("%s spend time: %lldms\n",funcName,endTime - satrtTime);
}

int main()
{
    int *list = (int *)malloc(MaxSize * sizeof(int));
    srand((unsigned)time(NULL));
    for (int i = 0; i < MaxSize; i++)
    {
        list[i] = rand() % 1000;
    }
    //list[rand() % MaxSize] = 1000;
    CountRunTime(SqSearch,"SqSearch",list,MaxSize,1234);
    QuickSort(list,0,MaxSize - 1);
    CountRunTime(BinSearch,"BinSearch",list,MaxSize,1243);
    return 0;
}
