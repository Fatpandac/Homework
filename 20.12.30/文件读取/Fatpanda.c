#include <stdio.h>

int main()
{
    char text[20];
    int i = 0,j = 0;
    FILE *fp = fopen("in.txt","rb");
    while ((text[j]=fgetc(fp))!= EOF)
    {
        j++;
    }
    for (i = 0; i < j; i++)
    {
        printf("%c(%d)",text[i],text[i]);
    }
    fclose(fp);
    return 0;
}