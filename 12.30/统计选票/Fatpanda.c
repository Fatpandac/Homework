#include<stdio.h>
#include<string.h>

struct Person{    
    char name[20];              
    int count;                                      
}leader[3]={"Li",0,"Zhang",0,"Sun",0};
int  main()
{
    char vote[20];
    int j,i;
    for (i = 0; i < 5; i++)
    {
        scanf("%s",vote);
        for (j = 0; j < 3; j++)
        {
            if (strcmp(leader[j].name,vote) == 0)
            {
                leader[j].count++;
                break;
            }
        }
    }
    for (i = 0; i < 3; i++)
    {
        printf("%s:%d\n",leader[i].name,leader[i].count);
    }
    return  0;
}