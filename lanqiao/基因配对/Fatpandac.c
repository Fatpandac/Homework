#include <stdio.h>
#include <string.h>

char DNA1[1000000],DNA2[1000000];

int searchHead(int n,int m)
{
    if (m == strlen(DNA2))
    {
        return n-m+1;
    }
    (DNA1[n] == DNA2[m])?searchHead(++n,++m):searchHead(++n,m);
}

void tDNA()
{
    for (int i = 0; i < strlen(DNA2); i++)
    {
        switch (DNA2[i])
        {
            case 'A':DNA2[i] = 'T';break;
            case 'T':DNA2[i] = 'A';break;
            case 'G':DNA2[i] = 'C';break;
            case 'C':DNA2[i] = 'G';break;
            default:break;
        }
    }
} 

int main()
{
    int n=0,m=0;
    scanf("%s",DNA1);
    scanf("%s",DNA2);
    tDNA();
    printf("%d",searchHead(n,m));
    return 0;
}