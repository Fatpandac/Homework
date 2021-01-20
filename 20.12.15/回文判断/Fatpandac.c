#include <stdio.h>
#include <string.h>

int main()
{
    int i,j,flag=0;
    char content[51];
    scanf("%s",content);
    for (i=0,j=strlen(content)-1; i < j;i++,j--)
    {
        if (content[i] != content[j])
        {
            flag = 1;
        }
    }
    printf("%s",(!flag)?"Yes":"No");
    return 0;
}