#include <stdio.h>

int main()
{
    int i,j,g,numlist1[20],numlist2[20],commonlist[20],n,m,k,num;
    scanf("%d",&n);
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&numlist1[i]);
    }
    scanf("%d",&m);
    for ( j = 0; j < m; j++)
    {
        scanf("%d",&numlist2[j]);
    }
    k=0;
    for ( i = 0; i < n; i++)
    {
        for ( j = 0; j < m; j++)
        {
            if (numlist1[i] == numlist2[j])
            {
                commonlist[k] = numlist1[i];
                for ( g = 0; g < m; g++)
                {
                    if (numlist1[i] == numlist2[g])
                    {
                        numlist2[g] = 040;
                    }
                }
                k++;
            }
        }
    }
    for ( i = 0; i < k; i++)
    {
        for ( j = i; j < k; j++)
        {
            if (commonlist[i] < commonlist[j])
            {
                num = commonlist[i];
                commonlist[i] = commonlist[j];
                commonlist[j] = num;
            }
        }   
    }
    if (commonlist[0] > 0)
    {
        for ( i = 0; i < k; i++)
        {
            printf("%d ",commonlist[i]);
        }
    }
    else
    {
        printf("No Answer");
    }
    
    return 0;
}