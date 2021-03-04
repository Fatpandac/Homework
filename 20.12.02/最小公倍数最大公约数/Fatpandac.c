#include <stdio.h>

int gys(int m,int n)
{
    return n==0?m:gys(n,m%n);
}

int gbs(int m, int n)
{
    return m*n/gys(m,n);
}

int main()
{
    int m, n;
    int x, y;
    scanf("%d%d", &m, &n);
    x = gys(m, n); //x是最大公约数
    y = gbs(m, n); //y是最小公倍数
    printf("%d\n", x);
    printf("%d\n", y);
    return 0;
}
