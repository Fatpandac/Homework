#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define Ture 1
#define False 0
#define MaxSize 20

typedef struct {
    int data[MaxSize];
    int fornt,rear;
}SqQueue;

typedef struct{
    int waitTime;
    int workOutTime;
}patien;


typedef struct{
    patien patien[MaxSize];
    int fornt,rear;
}PatienQnene;

int FullQueue(SqQueue *queue) 
{
    return (queue->fornt == (queue->rear+1) % MaxSize)? Ture : False;
}

int EmptyQueue(SqQueue *queue)
{
    return (queue->fornt == queue->rear)? Ture : False ;
}

int EnQueue(SqQueue *queue,int num)
{
    if (FullQueue(queue)) return False;
    queue->data[queue->rear] = num;
    queue->rear = ++queue->rear % MaxSize;
    return Ture;
}

int DeQueue(SqQueue *queue,int *value)
{
    if (EmptyQueue(queue)) return False;
    *value = queue->data[queue->fornt];
    queue->fornt = ++queue->fornt % MaxSize;
    return Ture;
}

int PrintQueue(SqQueue queue)
{
    if (EmptyQueue(&queue)) return False;
    while (1)
    {
        printf("%d ",queue.data[queue.fornt++]);
        queue.fornt %= MaxSize;
        if (EmptyQueue(&queue)) 
        {
            printf("\n");
            return Ture;
        };
    }
}

int CreateQueue(SqQueue *queue,int numList[],int numListLenght)
{
    if (FullQueue(queue)) return False;
    for (int i = 0; i < numListLenght; i++)
    {
        if (!EnQueue(queue,numList[i])) return False;
    }
    return Ture;
}

int DelNumQueue(SqQueue *queue,int delNum)
{
    int popNum,preNumLisat[MaxSize],preNumLisatLenght = 0;
    while (DeQueue(queue,&popNum))
    {
        if (popNum == delNum) break;
        preNumLisat[preNumLisatLenght++] = popNum;
    }
    CreateQueue(queue,preNumLisat,preNumLisatLenght);
    return Ture;
}

int OutputQueue(SqQueue *queue)
{
    if (EmptyQueue(queue)) return False;
    int vluae;
    while (DeQueue(queue,&vluae))
    {
        printf("%d ",vluae);
    }
    printf("\n");
    return Ture;
}

int main()
{
    SqQueue queue;
    int numList[10] = {1,2,3,4,5,6,7,8,9,0},vluae;
    queue.fornt = queue.rear = 0;
    CreateQueue(&queue,numList,10);
    PrintQueue(queue);
    if (DeQueue(&queue,&vluae)) printf("%d\n",vluae);
    PrintQueue(queue);
    DelNumQueue(&queue,5);
    PrintQueue(queue);
    OutputQueue(&queue);
    PrintQueue(queue);
}