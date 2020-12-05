#include <stdio.h>

void myPrint(int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("*");
    }
}

int main()
{
    int n;
    scanf("%d",&n);
    myPrint(n);
    return 0;
}