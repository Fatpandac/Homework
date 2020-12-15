#include <stdio.h>
#include <string.h>

void connect(char content[],char content1[],int n,int m)
{
    int i,j;
    for (i = n,j=0; i <= n+m-1; i++,j++)
    {
        content[i] = content1[j];
    }
}

int main()
{
    char content[100],content1[50];
    scanf("%s",content);
    scanf("%s",content1);
    connect(content,content1,strlen(content),strlen(content1));
    printf("%s",content);
    return 0;
}