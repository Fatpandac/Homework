#include <stdio.h>

int i;

union Categ{ 
    int class;
    char position[10]; 
};

struct Person{
    int num;
    char name[10];
    char sex;
    char job;
    union  Categ  category;
}person[2]; 

void input(struct Person *person)
{ 
    for (i = 0; i < 2; i++)
    {
        printf("please enter the data of person:\n");
        scanf(" %d\n%s\n%c\n%c",&person[i].num,person[i].name,&person[i].sex,&person[i].job);
        if (person[i].job == 's')
        {
            scanf("%d",&person[i].category.class);
        }else if(person[i].job == 't'){
            scanf("%s",person[i].category.position);
        }else{
            printf("Input error!");
        }
    }
}

void output(struct Person *person)
{
    printf("\nNo.  name      sex job class/position\n");
    for (i = 0; i < 2; i++)
    {
        printf("%-6d%-10s%-4c%-4c",person[i].num,person[i].name,person[i].sex,person[i].job);
        (person[i].job == 's')?printf("%d\n",person[i].category.class):printf("%s\n",person[i].category.position);
    }
}

int main()
{
    input(person);
    output(person);
    return 0;
}