#include <stdio.h>
#include <math.h>

int p;

void generateHilbertCurve(int hilbertCurve[100][100],int n,int m)
{
    int newHilbertCurve[100][100],g=0,k=0;
    if (n >= m)
    {
        //Upper left and right
        for (int i = 0; i < pow(2,m)/2; i++)
        {
            for (int j = 0,h = pow(2,m)/2; j < pow(2,m)/2; j++,h++)
            {
                newHilbertCurve[i][h] = hilbertCurve[g][k] + pow(2,m)/2*pow(2,m)/2*2;
                newHilbertCurve[i][j] = hilbertCurve[g][k++]+pow(2,m)/2*pow(2,m)/2;
            }
            k=0,g++;
        }
        //Lower left
        g=k=pow(2,m-1)-1;
        for (int i = pow(2,m)/2; i < pow(2,m); i++)
        {
            for (int j = 0; j < pow(2,m)/2; j++)
            {
                newHilbertCurve[i][j] = hilbertCurve[g--][k];
            }
            g=pow(2,m-1)-1,k--;
        }
        //Lower right
        g=k=0;
        for (int i = pow(2,m)/2; i < pow(2,m); i++)
        {
            for (int j = pow(2,m)/2; j < pow(2,m); j++)
            {
                newHilbertCurve[i][j] = hilbertCurve[g++][k] + pow(2,m)/2*pow(2,m)/2*3;
            }
            g=0,k++;
        }
        generateHilbertCurve(newHilbertCurve,n,++m);
    }else{
        for (int i = 0; i < pow(2,n); i++)
        {
            for (int j = 0; j < pow(2,n); j++)
            {
                if (hilbertCurve[i][j] == p)
                {
                    printf("%d %g",j,pow(2,n)-1-i);
                }
            }
        }
    }
}

int main()
{
    int hilbertCurve[100][100]={{2,3},{1,4}},n;
    scanf("%d %d",&n,&p);
    generateHilbertCurve(hilbertCurve,n,2);
    return 0;    
}