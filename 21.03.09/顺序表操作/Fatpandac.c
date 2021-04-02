#include <stdio.h>
#include <stdlib.h>

#define MaxSize 10

typedef struct
{
    int data[MaxSize];
    int length;
}Sqlist;

void DisplayList(Sqlist L)      //遍历输出线性表
{
    for (int i = 0;i < L.length;i++)
    {
        printf("%4d",L.data[i]);
    }
    printf("\n");
}

int InitList (Sqlist *L,int n)     //初始化线性表
{
    if (n > 10) return 0;       //判断非法输入
    int num = 0;
    for (int i = 0; i < n;i++)
    {
        L->data[i] = num++;
    }
    L->length = n;
    return 1;
}

int InsertList (Sqlist *L ,int i,int e)   //向顺序表第i个位置插入元素e
{
    if (i >= L->length) return 0;       //判断非法输入
    for (int j = L->length;j >= i; j--)
    {
        L->data[j] = L->data[j-1];
    }
    L->data[i] = e;
    L->length++;
    return 1;
}

int FindList(Sqlist *L,int e)        //查找线性表中元素e
{
    for (int i=0;i <= L->length;i++)
    {
        if (L->data[i] == e) return i;
    }
    return -1;
}

int DeleteList1(Sqlist *L,int e)        //删除顺序表中指定值e
{
    int i = FindList(L,e);
    if (i == -1)
    {
        return 0;
    }else{
        for (;i <= L->length;i++)
        {
            L->data[i] = L->data[i+1];
        }
        L->length--;
        return 1;
    }
}

int DeleteList2(Sqlist *L,int i)        //删除顺序表中指定位置元素
{
    if (i > L->length) return 0;        //判断非法输入
    for (;i <= L->length;i++)
    {
        L->data[i] = L->data[i+1];
    }
    L->length--;
    return 1;
}

int menu()      //输出操作目录
{
    int code;
    printf("[1] 初始化\n[2] 插入元素\n[3] 寻找元素\n[4] 删除指定值的元素\n[5] 删除指定位置元素\n[6] 查看元素\n[0] 退出");
    printf("\n请输入相应操作序号：");
    scanf("%d",&code);
    return code;
}

void unStatusCode(int StatusCode)       //解码状态码
{
    StatusCode == 1 ? printf("操作成功！！\n"):printf("操作失败！！！\n");
}

int main()
{
    Sqlist L;
    int index;      //用于保存查找结果
    InitList(&L,3);
    while (1)
    {
        switch (menu())
        {
            case 1:
                unStatusCode(InitList(&L,3));
                break;
            case 2:
                unStatusCode(InsertList(&L,1,9));
                break;
            case 3:
                index = FindList(&L,9);
                index != -1 ? printf("在%d\n",index):printf("没找到！！！\n");
                break;
            case 4:
                unStatusCode(DeleteList1(&L,3));
                break;
            case 5:
                unStatusCode(DeleteList2(&L,2));
                break;
            case 6:
                DisplayList(L);
                break;
            case 0:
                exit(0);
            default:
                printf("请正确输入");
        }
    }
    return 0;
}
