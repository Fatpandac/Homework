#include <stdio.h>

int main()
{
    int i,n=15,Fibonacci[40]={0,1};
    for ( i = 2; i < n; i++)
    {
        Fibonacci[i] = Fibonacci[i-1]+Fibonacci[i-2];
    }
    for (i = 0; i < n; i++)
    {
        printf("%-6d",Fibonacci[i]);
    }                           
    return 0;               
}