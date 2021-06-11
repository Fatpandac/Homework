#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define True 1
#define Flase 0
#define MaxSize 20

typedef struct {
    int data[MaxSize];
    int fornt,count;
}SqQueue;

typedef struct {
    int waitTime;
    int workOutTime;
}Patine;

typedef struct {
    Patine patineList[MaxSize];
    int patineListLenght;
}PatineList;

int FullQueue(SqQueue *queue)
{
    return (MaxSize == queue->count);
}

int EmptyQueue(SqQueue *queue)
{
    return (queue->count == 0);
}

int EnQueue(SqQueue *queue,int num)
{
    if (FullQueue(queue)) return Flase;
    queue->data[queue->fornt + queue->count++] = num;
    return True;
}

int DeQueue(SqQueue *queue,int *num)
{
    if (EmptyQueue(queue)) return Flase;
    *num = queue->data[queue->fornt++];
    queue->count--;
    queue->fornt %= MaxSize;
    return True;
}

int CreateQueue(SqQueue *queue,int numList[],int numListLenght)
{
    if (FullQueue(queue)) return Flase;
    for (int i = 0; i < numListLenght; i++)
    {
        if (!EnQueue(queue,numList[i])) return Flase;
    }
    return True;
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
    return True;
}

int PrintQueue(SqQueue queue)
{
    if (EmptyQueue(&queue)) return Flase;
    int num;
    while (DeQueue(&queue,&num))
    {
        printf("%d ",num);
    }       
    printf("\n");
    return True;
}

int OutputQueue(SqQueue *queue)
{
    if (EmptyQueue(queue)) return Flase;
    int num;
    while (DeQueue(queue,&num))
    {
        printf("%d ",num);
    }
    printf("\n");
    return True;
}

void InitPatine(PatineList *patineList)
{
    srand((unsigned)time(NULL));
    patineList->patineListLenght = rand()%MaxSize;
    for (int i = 0; i < patineList->patineListLenght; i++)
    {
       patineList->patineList[i].waitTime = rand()%14;
       patineList->patineList[i].workOutTime = rand()%9+1;
    }
}

void DisplayPatine(PatineList patineList)
{
    printf("WaitTime:   ");
    for (int i = 0; i < patineList.patineListLenght; i++)
    {
        printf("%2d ",patineList.patineList[i].waitTime);
    }
    printf("\nWorkoutTime:");
    for (int i = 0; i < patineList.patineListLenght; i++)
    {
        printf("%2d ",patineList.patineList[i].workOutTime);
    }
    printf("\n");
}

void RemovePatine(PatineList *patineList,int patineWaitTime)
{
    int index = 0;
    for (int i = 0; i < patineList->patineListLenght; i++)
    {
        if (patineList->patineList[i].waitTime != patineWaitTime)
        {
            patineList->patineList[index++] = patineList->patineList[i]; 
        }
    }
    patineList->patineListLenght = index;
}

int GetWaitAndWorkoutTime()
{
    PatineList patineList;
    SqQueue workoutQueue;
    workoutQueue.fornt = workoutQueue.count = 0;
    int patineWaitTime = 0,doctorWaitTime = 0;
    InitPatine(&patineList);
    DisplayPatine(patineList);
    while (1)
    {
        if (EmptyQueue(&workoutQueue))
        {
            doctorWaitTime += patineList.patineList[0].waitTime;
            EnQueue(&workoutQueue,patineList.patineList[0].workOutTime);
            RemovePatine(&patineList,patineList.patineList[0].waitTime);
        } else {
            for (int i = 0; i < patineList.patineListLenght; i++)
            {
                patineList.patineList[i].waitTime--;
                patineWaitTime++;
                if (patineList.patineList[i].waitTime <= 0)
                {
                    EnQueue(&workoutQueue,patineList.patineList[i].workOutTime);
                    RemovePatine(&patineList,patineList.patineList[i].waitTime);
                }
            }
        }
        if (!EmptyQueue(&workoutQueue))
        {
            if (--workoutQueue.data[workoutQueue.fornt] == 0)
            {
                workoutQueue.fornt++;
                workoutQueue.count--;
            }
        }
        if ((patineList.patineListLenght == 0) && EmptyQueue(&workoutQueue)) break;    
    }
    printf("%d %d",patineWaitTime,doctorWaitTime);
}

int main()
{
    SqQueue queue;
    int numList[10] = {1,2,3,4,5,6,7,8,9,0},vluae;
    queue.fornt = queue.count = 0;
    CreateQueue(&queue,numList,10);
    PrintQueue(queue);
    if (DeQueue(&queue,&vluae)) printf("%d\n",vluae);
    PrintQueue(queue);
    DelNumQueue(&queue,5);
    PrintQueue(queue);
    OutputQueue(&queue);
    PrintQueue(queue);
    /*医务室*/
    GetWaitAndWorkoutTime();
    return 0;
}