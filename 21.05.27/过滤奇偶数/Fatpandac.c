#include <stdio.h>

#define MaxSize 10

typedef struct{
    int data[MaxSize];
    int length;
}SqList;

void CreatList(SqList *dst,int src[],int length)
{
    for (int i = 0;i < length;i++)
    {
        dst->data[i] = src[i];
    }
    dst->length = length;
}

void FliterEvenNumber(SqList *L,SqList *L1)
{
    int flieredLength = 0;
    for (int i = 0;i < L->length;i++)
    {
        (L->data[i] % 2) ? (L->data[flieredLength++] = L->data[i]) : (L1->data[L1->length++] = L->data[i]);
    }
    L->length = flieredLength;
}

void DisplayList(SqList L)
{
    for (int i = 0;i < L.length;i++)
    {
        printf("%2d ",L.data[i]);
    }
}

int main()
{
    SqList L,L1;
    int numList[MaxSize] = {1,2,3,4,5,6,7,8,9,10};
    L.length = L1.length = 0;       // Initialize the SqList
    CreatList(&L,numList,MaxSize);
    printf("Origin: ");
    DisplayList(L);
    FliterEvenNumber(&L,&L1);
    printf("\nL     : ");
    DisplayList(L);
    printf("\nL1    : ");
    DisplayList(L1);
    return 0;
}
