#include <stdio.h>
# define N 3

int i;

struct student{
    char num[6];
    char name[8];
    int score[4];
    float avr;
}stu [N];

void input(struct student *stu)
{
    for (i = 0; i < N; i++)
    {
        switch (i)
        {
        case 0:
            scanf("Input scores of student 1:\nNO.: %s",stu[i].num);
            break;
        case 1:
            scanf("Input scores of student 2:\nNO.: %s",stu[i].num);
            break;
        case 2:
            scanf("Input scores of student 3:\nNO.: %s",stu[i].num);
            break;
        default:
            break;
        }
        scanf("\nname: %s",stu[i].name);
        scanf("\nscore1: %d",&stu[i].score[0]);
        scanf("\nscore2: %d",&stu[i].score[1]);
        scanf("\nscore3: %d\n\n",&stu[i].score[2]);
        stu[i].avr = (stu[i].score[0]+stu[i].score[1]+stu[i].score[2])/3.0;
    }
}

void output(struct student *stu)
{
    printf("NO.       name      score1    score2    score3    average\n");
    for (i = 0; i < N; i++)
    {
        printf("%-10s%-10s%-10d%-10d%-10d%.2lf\n",stu[i].num,stu[i].name,stu[i].score[0],stu[i].score[1],stu[i].score[2],stu[i].avr);
    }
    
}

int main()
{
    input(stu);
    output(stu);
    return 0;
}