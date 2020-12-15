#include <stdio.h>
#include <string.h>

void invert(char *s)
{
    int i,j;
    char temp;
    for (i=0,j=strlen(s)-1; i < j; i++,j--)
    {
        temp = s[i];
        s[i] = s[j];
        s[j] = temp;
    }
}

int main()
{
    int n,i;
    char content[20][101];
    scanf("%d",&n);
    for (i = 0; i < n; i++)
    {
        scanf("%s",content[i]);
    }
    for (i = 0; i < n; i++)
    {
        invert(content[i]);
    }
    for (i = 0; i < n; i++)
    {
        puts(content[i]);
    }
    return 0;
}