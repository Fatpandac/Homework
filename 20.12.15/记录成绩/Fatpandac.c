#include <stdio.h>
#define N 5

int i;

typedef struct Student{
    char name[40];
    int age;
    int score;
}STU;

void input(STU *stu)
{
    scanf("请输入5名学生信息：\n 姓名  年龄  成绩 %s%d%d",stu[0].name,&stu[0].age,&stu[0].score);
    for (i = 1; i < N; i++)
    {
        scanf("%s%d%d",stu[i].name,&stu[i].age,&stu[i].score);
    }
    
}

void output(STU *stu)
{
    printf("成绩变化之前：\n");
    for (i = 0; i < N; i++)
    {
        printf("%-8s%-6d%d\n",stu[i].name,stu[i].age,stu[i].score);
    }
    for (i = 0; i < N; i++)
    {
        stu[i].score += (stu[i].age>18)?10:0;
    }
    printf("成绩变化之后：\n");
    for (i = 0; i < N; i++)
    {
        printf("%-8s%-6d%d\n",stu[i].name,stu[i].age,stu[i].score);
    }
}

int main()
{
    STU stu[N];
    input(stu);
    output(stu);
    return 0;
}