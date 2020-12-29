#include <stdio.h>

int boxrow(int m)
{
    int row = 0;
    return row+=(m-5>=0) ? boxrow(m-6)+5 : m;
}

int boxcolumn(int n)
{
    int column = 0;
    return  column+=(n-2>=0) ? boxcolumn(n-3)+2 : n;
}

int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    printf("%d",boxrow(m)*(boxcolumn(n-2)+1));
    return 0;
}