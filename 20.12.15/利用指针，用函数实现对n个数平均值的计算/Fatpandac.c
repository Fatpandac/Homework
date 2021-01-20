#include <stdio.h>

double ave(int a[],int n);

int main()
{
    int  a[10],n,i;
    double  y;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    y=ave(a,n);
    printf("%.2lf",y);
    return 0;
}
double ave(int a[],int n)
{
    int i,sum=0;
    for (i = 0; i < n; i++)
    {
        sum += a[i];
    }
    return sum*1.0/n*1.0;
}