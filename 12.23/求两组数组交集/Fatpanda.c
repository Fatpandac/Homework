#include <stdio.h>

int i,j;

int main() 
{
    int tmp,num,numlist[40],index = 0;
    for (j = 0; j < 2; j++)
    {
        for (i = index; i < 40; i++)
        {
            scanf("%d",&num);
            if (num != -1)
            {
                numlist[i] = num;
            }else{
                index = i;
                break;
            } 
        }
    }
    for (i = 0; i < index; i++)
    {
        for (j = 0; j < index; j++)
        {
            if (numlist[i]<numlist[j])
            {
                tmp = numlist[j];numlist[j] = numlist[i];numlist[i] = tmp;
            }
        }
    }
    for (i = 0; i < index-1; i++)
    {
        if (numlist[i] == numlist[i+1])
        {
            printf("%d ",numlist[i]);
        }
    }
    return 0;
}