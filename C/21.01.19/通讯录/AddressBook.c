#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define Max 50

typedef struct Person{
    char name[10];
    char sex;
    int age;
    char phoneNumber[20];
    char address[20];
}PER;


int i,j,countItem=0;

int menu()
{
    int key;
    printf("***********通讯录**********\n");
    printf("[1] 添加联系人\n");
    printf("[2] 显示联系人\n");
    printf("[3] 删除联系人\n");
    printf("[4] 查找联系人\n");
    printf("[5] 修改联系人\n");
    printf("[6] 清空联系人\n");
    printf("[0] 退出通讯录\n");
    printf("***************************\n");
    printf("请输入对应码数：");
    scanf("%d",&key);
    return key;
}

void add(PER *person)
{
    printf("请输入联系姓名：");
    scanf("%s",person[countItem].name);
    printf("请输入联系性别：");
    scanf(" %c",&person[countItem].sex);
    printf("请输入联系年龄：");
    scanf(" %d",&person[countItem].age);
    printf("请输入联系电话：");
    scanf(" %s",person[countItem].phoneNumber);
    printf("请输入联系地址：");
    scanf(" %s",person[countItem].address);
    countItem++;
    printf("\n*\\添加成功/*\n");
}

void show(PER *person)
{
    printf("************************《通讯录》****************************\n");
    printf("姓名\t性别\t年龄\t电话\t地址\n");
    for (i = 0; i < countItem; i++)
    {
        printf(" %s\t%c\t%d\t%s\t%s\n",person[i].name,person[i].sex,person[i].age,person[i].phoneNumber,person[i].address);
    }
    printf("回车继续...");
    getch();
}

int delete(PER *person)
{
    char findName[10];
    printf("************************《通讯录》****************************\n");
    printf("请输入删除人姓名：");
    scanf("%s",findName);
    for (i = 0; i < countItem; i++)
    {
        if (!strcmp(person[i].name,findName))
        {
            for (j = i+1; j < countItem; j++)
            {
                person[i] = person[j];
                i++;         
            }
            countItem--;
        }
    }
    printf("\n成功删除%s",findName);
}

void find(PER *person)
{
    char findName[10];
    int flag = 1;
    printf("************************《通讯录》****************************\n");
    printf("请输入查找人姓名：");
    scanf("%s",findName);
    for (i = 0; i < countItem; i++)
    {
        if (!strcmp(person[i].name,findName))
        {
            printf(" %s\t%c\t%d\t%s\t%s\n",person[i].name,person[i].sex,person[i].age,person[i].phoneNumber,person[i].address);
            flag = 0;
        }
    }
    if (flag)
    {
        printf("\n该联系人不存在！！！");
    }
    printf("回车继续...");
    getch();
}

int change(PER *person)
{
    char findName[10];
    printf("************************《通讯录》****************************\n");
    printf("请输入修改的人姓名：");
    scanf("%s",findName);
    for (i = 0; i < countItem; i++)
    {
        if (!strcmp(person[i].name,findName))
        {
            printf("请输入联系姓名：");
            scanf("%s",person[i].name);
            printf("请输入联系性别：");
            scanf(" %c",&person[i].sex);
            printf("请输入联系年龄：");
            scanf(" %d",&person[i].age);
            printf("请输入联系电话：");
            scanf(" %s",person[i].phoneNumber);
            printf("请输入联系地址：");
            scanf(" %s",person[i].address);
            printf("\n*\\修改成功/*\n");
        }
        break;
    }
}

int clear()
{
    countItem = 0;
    main();
}

int main()
{
    PER person[Max];
    while (1)
    {
        switch (menu())
        {
        case 1: add(person);break;
        case 2: show(person);break;
        case 3: delete(person);break;
        case 4: find(person);break;
        case 5: change(person);break;
        case 6: clear(person);break;
        case 0: exit(0);break;
        default:printf("\n输入错误！！！\n");break;
        }
        system("cls");
    }
}