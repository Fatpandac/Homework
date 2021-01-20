#include <stdio.h>
#include <string.h>

int main()
{
    int i,j;
    char content[50],temp;
    scanf("%s",content);
    for (i = 0; i < strlen(content); i++)
    {
        for (j = 0; j < strlen(content); j++)
        {
            if (content[i]<content[j])
            {
                temp = content[i];
                content[i] = content[j];
                content[j] = temp;
            }
        }
    }
    for (i = 0; i < strlen(content); i++)
    {
        if (content[i]!=content[i+1])
        {
            printf("%c",content[i]);
        }
    }
    return 0;
}