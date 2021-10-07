#include <stdio.h>

int main()
{
    int i,j,k,g,numlist1[10][10],numlist2[10][10],start[2]={0},n1,n2,m=0,b=0;
    scanf("%d",&n1);
    for (i = 0; i < n1; i++)
    {
        for (j = 0; j < n1; j++)
        {
            scanf("%d",&numlist1[i][j]);
        }
    }
    scanf("%d",&n2);
    for (i = 0; i < n2; i++)
    {
        for (j = 0; j < n2; j++)
        {
            scanf("%d",&numlist2[i][j]);
        }
    }
    for (i = 0; i < n1; i++)
    {
        for (j = 0; j < n1; j++)
        {
            if (numlist1[i][j]==numlist2[0][0])
            {
                m = 0;
                for (k = 0; k < n2; k++)
                {
                    for (g = 0; g < n2; g++)
                    {
                        if (numlist1[i+k][j+g] == numlist2[k][g])
                        {
                            start[0] = i;start[1] = j;
                            m++;
                        }
                        else
                        {
                            m = 0;
                        }
                    }
                    if (m == n2*n2 && b == 0)
                    {
                        printf("%d,%d",start[0]+1,start[1]+1);
                        b = -1;
                    }
                }
            }
        }
    }
    if (m != n2*n2 && b == 0)
    {
        printf("-1");
    }
    
    return 0;
}