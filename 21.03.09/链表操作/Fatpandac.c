#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node * next;
}SqList;

int CreateList_t(SqList *head,int numberList[10])   //尾插法
{
    SqList *nextNode;
    SqList *headAdd = head;
    for (int i = 0;i < 10;i++)
    {
        nextNode = (SqList *)malloc(sizeof(SqList));
        headAdd->next = nextNode;
        nextNode->data = numberList[i];
        nextNode->next = NULL;
        headAdd = nextNode;

    }
   return 0;
}

int CreatList_h(SqList *head,int numberList[10])    //头插法
{    
    SqList *nextNode;
    SqList *headAdd = head;
    for (int i = 0;i < 10;i++)
    {
        nextNode = (SqList *)malloc(sizeof(SqList));
        nextNode->next = headAdd->next;
        headAdd->next = nextNode;
        nextNode->data = numberList[i];
    }
    return 0;
}

int InsertList(SqList *head,int index,int number)
{
    int i = 0;
    SqList *nextNode;
    SqList *headIns = head;
    SqList *preNode;
    while((headIns->next != NULL) && (i != index))
    {
        i++;
        preNode = headIns;
        headIns = headIns->next;
    }
    nextNode = (SqList *)malloc(sizeof(SqList));
    nextNode->data = number;
    preNode->next = nextNode;
    nextNode->next = headIns;
    return 0;
}

int DeleteList(SqList *head,int number)
{
    SqList *preNode;
    SqList *headDel = head;
    while(headDel->next != NULL)
    {
        preNode = headDel;
        headDel = headDel->next;
        if (headDel->data == number)
        {
            preNode->next = headDel->next;
            free(headDel);
            return 0;
        }
    }
    return 0;
}

int FindList(SqList *head,int number)
{
    int i = 0;
    SqList *headFind = head;
    while(headFind->next != NULL)
    {
        i++;
        headFind = headFind->next;
        if (headFind->data == number)
        {
            return i;
        }
    }
    return 0;       //返回index,对 0 和 1 status要进行区分
}

int OutputList(SqList *head)
{
    SqList *headOutput=head;
    while (headOutput->next != NULL)
    {
        headOutput = headOutput->next;
        printf("%d ",headOutput->data);
    }
    printf("\n");
    return 0;
}

int main()
{
    int numberList[10] = {1,2,3,4,5,6,7,8,9};        //初始数据
    SqList head_h;      //头插法的头
    head_h.next = NULL;
    SqList head_t;      //尾插法的尾
    head_t.next = NULL;
    CreatList_h(&head_h,numberList);
    CreateList_t(&head_t,numberList);
    printf("头插法初始化：\n");
    OutputList(&head_h);
    printf("尾插法初始化：\n");
    OutputList(&head_t);
    printf("在头插法链表第二位插入10：\n");
    InsertList(&head_h,2,10);
    OutputList(&head_h);
    printf("在尾插法链表第三位插入10：\n");
    InsertList(&head_t,3,10);
    OutputList(&head_t);
    printf("查找头插法中的9：\n");
    printf("9在头插法第%d位\n",FindList(&head_h,9));
    printf("删除头插法中的7：\n");
    DeleteList(&head_h,7);
    OutputList(&head_h);
    printf("删除尾插法中的7：\n");
    DeleteList(&head_t,7);
    OutputList(&head_t);
    return 0;
}
