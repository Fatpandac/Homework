#include <stdio.h>

int main()
{
    int word,space=0,tab=0,enter=0;
    while((word = getchar()) != EOF)
    {
        if (word == 32)
        {
            space++;
        }
        else if (word == 10)
        {
            enter++;
        }
        else if (word == 9)
        {
            tab++;
        }
    }
    printf("%d %d %d",space,tab,enter);
    return 0;
}