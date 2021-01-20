#include <stdio.h>

int main()
{
    int i,j,numlist[10][10],max[3],min[3];
    printf("please input 3*4 integers:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            scanf("%d",&numlist[i][j]);
        }
    }
    max[0] = numlist[0][0];
    min[0] = numlist[0][0];
    max[1]=max[2]=min[1]=min[2]=0;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            if (max[0] < numlist[i][j])
            {
                max[0] = numlist[i][j];
                max[1] = i; max[2] = j;
            }    
            if (min[0] > numlist[i][j])
            {
                min[0] = numlist[i][j];
                min[1] = i; min[2] = j;
            }            
        }
    }
    printf("max=%d,row=%d,col=%d\n",max[0],max[1],max[2]);
    printf("min=%d,row=%d,col=%d",min[0],min[1],min[2]);
    return 0;
}