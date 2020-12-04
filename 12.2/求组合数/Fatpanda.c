#include <stdio.h>

int main()
{
    double fuct(int n);
    int n,m;
    scanf("%d %d",&m,&n);
    printf("result = %.0f",fuct(n)/(fuct(m)*fuct(n-m)));
    return 0;
}

double fuct(int n)
{ 
    double sum = 1;
    int i;
    for (i = 1; i <= n; i++)
    {
        sum *= i;
    }
    return sum;
}
