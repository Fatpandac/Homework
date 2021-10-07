#include <stdio.h>
#define N 5

int i;

struct Student{
    char name[10];
    int age;
    int score;
}stu[N];

void input(struct Student *stu)
{
    for (i = 0; i < N; i++)
    {
        scanf("%s %d %d",stu[i].name,&stu[i].age,&stu[i].score);
    }
}

struct Student *plusscore(struct Student *stu)
{
    for (i = 0; i < N; i++)
    {
        stu[i].score += (stu[i].age>18)?10:0;
    }
    return stu;
}

void output(struct Student *stu,int key)
{
    (key == 0)?printf("before:\n"):printf("after:\n");
    for (i = 0; i < N; i++)
    {
        printf("%s %d %d\n",stu[i].name,stu[i].age,stu[i].score);
    }
}

int main()
{
    input(stu);
    output(stu,0);
    output(plusscore(stu),1);
    return 0;
}
