#include <stdio.h>

int main()
{
    void print(int n);
    int j,num,n[10],i=0;
    while ((num=getchar()) != EOF)
    {
        if (num != 32)
        {
            n[i]=num;
            i++;
        }       
    }
    for (j = 0; j < i; j++)
    {
       print(n[j]);
    }
    return 0;
}

void print(int n)
{   
    int i,j,k,yhtriangle[10][10];
    for (i = 0; i <= n-48; i++)
    {
        for (j = 0;j < i; j++)
        {
            if (i<3)
            {
                yhtriangle[1][0] = yhtriangle[2][0] = yhtriangle[2][1] = 1;
            }
            else if (j == 0 || j+1 == i)
            {
                yhtriangle[i][j] = 1;
            }
            else
            {
                yhtriangle[i][j] = yhtriangle[i-1][j-1]+yhtriangle[i-1][j];
            }
        }
    }  
    for (i = n-48; i > 0; i--)
    {
        for (k = 0; k < n-48-i; k++)
        {
            printf(" ");
        }
        for (j = 0;j < i; j++)
        {
            printf("%6d",yhtriangle[i][j]);
        }
        printf("\n");
    }
}