#include <stdio.h>
#include <math.h>

int fishing(int fishPosition[50][2],int n,int R)
{
    int unGetFish[50][2],m=0;
    for (int i = 0; i < n-1; i++)
    {
        if (sqrt(pow((fishPosition[0][0]-fishPosition[i+1][0]),2)+pow((fishPosition[0][1]-fishPosition[i+1][1]),2)) > 5)
        {
            unGetFish[m][0] = fishPosition[i][0];
            unGetFish[m][1] = fishPosition[i][1];
            m++;
        }
    }
    return (m != 0)?fishing(unGetFish,m,R)+1:1;
}

int main()
{
    int fishPosition[50][2],n,R;
    scanf("%d %d",&n,&R);
    for (int i = 0; i < n; i++)
    {
        scanf("%d %d",&fishPosition[i][0],&fishPosition[i][1]);
    }
    printf("%d",fishing(fishPosition,n,R));
    return 0;    
}