#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int counttime=0,score=0;


void makenum(int *n,int *m,int *oprate)
{
    *n = rand()%50;
    *m = rand()%50;
    *oprate = (rand()%100)%2;
    if ((*n+*m>50)||(*n-*m<0))
    {
        makenum(n,m,oprate);
    }
}

void qusetion(int n,int m,int oprate,int time)
{
    int input,answer = (oprate) ? n+m : n-m;
    (oprate)?printf("*      %-2d + %-2d     *\n",n,m):printf("*      %-2d - %-2d     *\n",n,m);
    printf("********************\n");
    printf("请输入答案：");
    scanf("%d",&input);
    if (answer == input)
    {
        score += (time == 0)?10:(time == 1)?7:(time == 2)?5:0;
    }else{
        if (time >= 2)
        {
            score += 0;
        }else{
            printf("**回答错误再试一次**\n");
            qusetion(n,m,oprate,time+1);
        } 
    }
}

void result()
{
    (0<score&&score<60)\
        ?printf("TRY AGAIN")\
        :(60<=score&&score<70)\
            ?printf("PASS")\
            :(70<=score&&score<80)\
                ?printf("OK")\
                :(80<=score&&score<90)\
                    ?printf("GOOD")\
                    :printf("SMART");
}

int main()
{   
    srand((unsigned)time(NULL));
    int n,m,oprate;
    while (counttime != 10)
    {
        printf("*****小学生测验*****\n");
        makenum(&n,&m,&oprate);
        qusetion(n,m,oprate,0);
        counttime++;
        system("cls");
    }
    result();
    return 0;
}