#include <stdio.h>
#define N 2

int i;

struct Student{
    int num;
    char name[10];
    float score;
}stu[N];

void input(struct Student *stu)
{
    for (i = 0; i < N; i++)
    {
        scanf("%d %s %f",&stu[i].num,stu[i].name,&stu[i].score);
    }
}

void output(struct Student *stu)
{
    if (stu[0].score==stu[1].score)
    {
        printf("The higher score is:\n%d%s   %.2f\n",stu[0].num,stu[0].name,stu[0].score);
        printf("%d%s   %.2f",stu[1].num,stu[1].name,stu[1].score);
    }else{
        (stu[0].score>stu[1].score)\
            ?printf("The higher score is:\n%d   %s   %.2f",stu[0].num,stu[0].name,stu[0].score)\
                :printf("The higher score is:\n%d %s   %.2f",stu[1].num,stu[1].name,stu[1].score);
    }
}


int main()
{
    input(stu);
    output(stu);
    return 0;
}
