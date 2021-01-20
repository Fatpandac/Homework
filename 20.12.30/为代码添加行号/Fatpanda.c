#include <stdio.h>

int main()
{
    FILE *fp = fopen("tt.c","r");
    FILE *fp1 = fopen("output.txt","w");
    char line[100];
    int num = 1;
    while (fgets(line,100,fp) != NULL)
    {
        fprintf(fp1,"%02d\t",num);
        fprintf(fp1,"%s",line);
        num++;
    }   
    fclose(fp);
    fclose(fp1);
    return 0;
}