#include <stdio.h>

void isPrime(int x)
{
    int i,j,numlist[40],flag = 0,index=0;
    for (i = 2;i < x;i++)
    {
        for (j = 2; j < i; j++)
        {
            if (i%j == 0)
            {
                flag = 1;
            }
        }
        if (flag == 0)
        {
            numlist[index] = i;
            index++;
        }
        flag = 0;   
    }
    for (i = index; i > 0; i--)
    {
        for (j = 0; j <= i; j++)
        {
            if (x == numlist[j]+numlist[i])
            {
                printf("%d=%d+%d",x,numlist[j],numlist[i]);
                flag = 1;
            }
        }
        if (flag == 1)
        {
            break;
        }
    }
}

int main()
{
    int num;
    scanf("%d",&num);
    isPrime(num);
    return 0;    
}