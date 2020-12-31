#include <stdio.h>

int i,j;

void putnum(int magicbox[10][10],int n)
{
    int num=0,m=n;

    while (n != 0)
    {
        for (i = m-n; i < n-1; i++)
        {
            magicbox[m-n][i] = ++num;
        }
        for (j = m-n; j < n-1; j++)
        {
            magicbox[j][i] = ++num;
        }
        
        for (i = n-1; i > m-n; i--)
        {
            magicbox[j][i] = ++num;
        }
        for (j = n-1; j > m-n; j--)
        {
            magicbox[j][m-n] = ++num;
        }   
        n--;
    }
    if (m%2 != 0)
    {
        magicbox[m/2][m/2]=m*m;
    }
}

int main()
{
    FILE *fp = fopen("file.out","w");
    int magicbox[10][10]={0},n;
    scanf("%d",&n);
    putnum(magicbox,n);
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            fprintf(fp,"%5d ",magicbox[i][j]);
        }
        fputc('\n',fp);
    }
    fclose(fp);
    return 0;
}