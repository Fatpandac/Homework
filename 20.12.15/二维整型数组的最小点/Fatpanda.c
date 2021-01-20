#include <stdio.h>

int i,j;

void getmin(int row,int column,int numlist[][10])
{
    int flag,k,m = 0;
    for (i = 0; i < row; i++)
    {
        flag = 1;
        for (j = 0; j < column; j++)
        {
            if (numlist[i][j] < numlist[i][m])
            {
                m = j;
            }
        }
        for (j = m; j < column; j++)
        {
            if (numlist[i][j] == numlist[i][m])
            {
                for (k = 0; k < row; k++)
                {
                    if (numlist[k][m]<numlist[i][m])
                    {
                        flag = 0;
                    }
                }
                if (flag)
                {
                    printf("%d %d %d\n",numlist[i][m],i+1,j+1);
                }
            }
        }
        
    }   
}

int main()
{
    int row,column,numlist[10][10];
    scanf("%d %d",&row,&column);
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < column; j++)
        {
            scanf("%d",&numlist[i][j]);
        }
    }
    getmin(row,column,numlist);
    return 0;
}