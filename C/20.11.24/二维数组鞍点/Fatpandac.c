#include <stdio.h>

int main()
{
    int i,j,g,k,max,min,numlist[20][20],n,m,h=0;
    scanf("%d %d",&n,&m);
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            scanf("%d",&numlist[i][j]);
        }
    }
   for (i = 0; i < n; i++)
    {
        max = m-1;min=0;
        for (j = 0; j < m; j++)
        {
            g=0;
            if (numlist[i][max]<=numlist[i][j])
            {
                max = j;
                min = i;
                for (k = 0; k < n; k++)
                {
                    if (numlist[min][max]>numlist[k][max])
                    {
                        g = -1;
                        break;
                    }          
                }
                if (g==0)
                {
                    printf("%d %d %d\n",numlist[min][max],min+1,max+1);
                    h++;
                }
            }
        }
    }
    if (h == 0)
    {
        printf("No answer");
    }
    
    return 0;
}