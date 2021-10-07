#include <stdio.h>

int main()
{
    int j,i,n,k,matrix1[10][10],matrix2[10][10],sum=0;
    scanf("%d",&n);
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d",&matrix1[i][j]);
        }   
    }
   for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d",&matrix2[i][j]);
        }   
    }
    for (i = 0; i < n; i++)
    {   
        for (j = 0; j < n; j++)
        {
            for (k = 0; k < n; k++)
            {
                sum += matrix1[i][k]*matrix2[k][j]; 
            }
            printf("%10d",sum);
            sum = 0;
        }
        printf("\n");
    }
    return 0;
}