#include <stdio.h>

int i,j;

int getnum(int numlist[40])
{
    int num,index = 0;
    for (j = 0; j < 2; j++)
    {
        scanf("%d",&num);
        for (i = index; i < index+num; i++)
        {
            scanf("%d",&numlist[i]);
        }
        index += num;
    }
    return index;
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
        if ((numlist[i] != numlist[i+1] && numlist[i-1] != numlist[i])||(i-1<0 && numlist[i] != numlist[i+1]))
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