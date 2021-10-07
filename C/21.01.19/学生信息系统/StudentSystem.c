#include <stdio.h>
#include <stdlib.h>

int i,j,countitem=0;

typedef struct Student{
    long long int num;
    char name[10];
    int age;
    char sex[5];
    char yymmdd[20];
    char address[20];
    char tel[20];
    char email[20];
}STU;


int mune(STU *stu)
{
    int key;
    printf("**********************************<<学生信息管理系统>>**********************************\n");
    printf("学号\t\t姓名\t年龄\t性别\t出生年/月/日\t联系地址\t联系电话\t联系邮箱\n");
    for (i = 0; i < countitem; i++)
    {
        printf("%-16lld%-8s%-8d%-8s%-16s%-16s%-16s%s\n",stu[i].num,stu[i].name,stu[i].age,stu[i].sex,stu[i].yymmdd,stu[i].address,stu[i].tel,stu[i].email);
    }
    printf("\n[1]学生综合信息录入\n");
    printf("[2]综合信息排序浏览\n");
    printf("[3]学生个人信息查询\n");
    printf("[4]学生综合信息修改\n");
    printf("[0]　退　出　系　统\n");
    printf("请输入：");
    scanf("%d",&key);
    return key;
}

void input(STU *stu,int index)
{
    int inputindex = (index != -1) ? index : countitem;
    printf("**********************************<<学生信息录入系统>>**********************************\n");
    printf("请输入学生学号：");
    scanf("%lld",&stu[inputindex].num);
    printf("请输入学生姓名：");
    scanf("%s",stu[inputindex].name);
    printf("请输入学生年龄：");
    scanf("%d",&stu[inputindex].age);
    printf("请输入学生性别：");
    scanf(" %s",&stu[inputindex].sex);
    printf("请输入学生出生年月日（/隔开）：");
    scanf("%s",stu[inputindex].yymmdd);
    printf("请输入学生联系地址：");
    scanf(" %s",stu[inputindex].address);
    printf("请输入学生联系电话：");
    scanf("%s",stu[inputindex].tel);
    printf("请输入学生联系邮箱："); 
    scanf("%s",stu[inputindex].email);
    (index != -1) ? 0 : countitem++;
    system("cls");
}

void rank(STU *stu)
{
    STU temp;
    for (i = 0; i < countitem; i++)
    {
        for (j = 0; j < countitem; j++)
        {
            if (stu[i].num < stu[j].num)
            {
                temp=stu[i];stu[i]=stu[j];stu[j]=temp;
            }
        }
    }
}

void search(STU *stu)
{
    long long int num;
    int searchresult[10],index = 0;
    printf("请输入搜索的学号：");
    scanf("%lld",&num);
    for (i = 0; i < countitem; i++)
    {
        if (num == stu[i].num)
        {
            searchresult[index] = i;
            index++;
        }
    }
    printf("**********************************<<学生学号搜索结果>>**********************************\n");
    printf("学号\t\t姓名\t年龄\t性别\t出生年/月/日\t联系地址\t联系电话\t联系邮箱\n");
    for (i = 0; i < index; i++)
    {
        printf("%-16lld%-8s%-8d%-8s%-16s%-16s%-16s%s\n",stu[searchresult[i]].num,stu[searchresult[i]].name,stu[searchresult[i]].age,stu[searchresult[i]].sex,stu[searchresult[i]].yymmdd,stu[searchresult[i]].address,stu[searchresult[i]].tel,stu[searchresult[i]].email);
    }
    printf("回车继续...");
    getch();
    system("cls");
}

void change(STU *stu)
{
    long long int num;
    int index;
    printf("请输入更改信息的学号：");
    scanf("%lld",&num);
    for (i = 0; i < countitem; i++)
    {
        if (num == stu[i].num)
        {
            index = i;
        }
    }
    input(stu,index);
}

void main()
{
    STU stu[20];
    int key;
    while (key = mune(stu))
    {
        if (key == 1)
        {
            system("cls");
            input(stu,-1);
        }
        else if (key == 2)
        {
            system("cls");
            rank(stu);
        }
        else if (key == 3)
        {
            system("cls");
            search(stu);
        }else if (key == 4)
        {
            system("cls");
            change(stu);
        }else if (key == 0)
        {
            break;
        }   
    }
}