#include <stdio.h>

int max(int x,int y)
{
    return (x>=y)?x:y;
}

int main()
{
    int x,y,z;
    scanf("%d %d %d",&x,&y,&z);
    printf("max=%d",max(max(x,y),z));
    return 0;
}