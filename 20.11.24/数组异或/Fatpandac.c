#include <stdio.h>

int main()
{
    int n,m,numlist[40],endnumlist[40],num,i,j,l,k=0;
    scanf("%d",&n);
    for (i = 0; i < n; i++)
    {
        scanf("%d",&numlist[i]);
    }
    scanf("%d",&m);
    for (i = n; i < m+n; i++)
    {
        scanf("%d",&numlist[i]);
    }
    l = n+m;
    for (i = 0; i < l; i++)
    {
        for (j = i; j < l; j++)
        {
            if (numlist[i] > numlist[j])
            {
                num = numlist[i];
                numlist[i] = numlist[j];
                numlist[j] = num;
            }
        }
    }
    for (i = 0; i < l; i++)
    {
        if (numlist[i] != numlist[i+1])//5 5 4 3 3 3 2 1
        {
            endnumlist[k] = numlist[i];
            k++;
        }
        else
        {
            i++;
        }

    }
    for (i = 0; i < k; i++)
    {
        printf("%d ",endnumlist[i]);
    }
    return 0;
}
