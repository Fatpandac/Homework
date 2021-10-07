#include <stdio.h>

int main()
{
    int i,j,l,k,numlist1[10][10],numlist2[10][10],list1n,list1m,list2n,list2m,changen,changem;
    scanf("%d %d",&list1n,&list1m);
    for ( i = 0; i < list1n; i++)
    {
        for (j = 0; j < list1m; j++)
        {
            scanf("%d",&numlist1[i][j]);
        }
    }
    scanf("%d %d",&list2n,&list2m);
    for (i = 0; i < list2n; i++)
    {
        for (j = 0; j < list2m; j++)
        {
            scanf("%d",&numlist2[i][j]);
        }
    }
    scanf("%d %d",&changen,&changem);
    l=k=0;
    for (i = changen-list2n; i < changen; i++)
    {
        for (j = changem-list2m; j < changem; j++)
        {
            numlist1[i][j] = numlist2[l][k];
            k++;
            if (k+2>=changem)
            {
               k=0;l++;
            }
        }
    }
    for ( i = 0; i < list1n; i++)
    {
        for (j = 0; j < list1m; j++)
        {
            printf("%d ",numlist1[i][j]);
        }
        printf("\n");
    }
    return 0;
}
