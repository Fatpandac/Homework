#include <stdio.h>

int i,j;

int getnum(int numlist[40])
{
    int num,flag=0;
    for (i = 0; i < 40; i++)
    {
        scanf("%d",&num);
        if (flag&&num==-1)
        {
            return i;
        }
        if (num == -1) 
        {
            flag = 1;
            i -= 1;
            continue;
        }
        numlist[i] = num;
    }
}

void sort(int numlist[40],int index)
{   
    int temp;
    for (i = 0; i < index; i++)
    {
        for (j = 0; j < index; j++)
        {
            if (numlist[i] < numlist[j])
            {
                temp = numlist[i];numlist[i] = numlist[j];numlist[j] = temp; 
            }   
        }
    }
}

void getunion(int numlist[40],int index)
{
    sort(numlist,index);
    for (i = 0; i < index; i++)
    {
       if (numlist[i] != numlist[i+1])
       {
           printf("%d ",numlist[i]);
       }
    }
}

int main()
{
    int numlist[40];
    getunion(numlist,getnum(numlist));
    return 0;
}