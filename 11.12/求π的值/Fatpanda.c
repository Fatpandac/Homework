#include<stdio.h>
#include<math.h>

double fpi(int i);

int main()
{
    int i, num;
    num = 0;
    double e, t=0, pi_r = 1.0, pi = 1.0;
    scanf("%lf", &e);
    for (i = 1; 2 * pi < e; i++)
    {
        t = pi;
        pi_r = pi_r * fpi(i);
        pi += pi_r;
        num += 1;
    }
    printf("%.7lf %d", t * 2.0, num);
    return 0;
}
double fpi(int i) 
{
    double p = 1.0;
    p = p*i / (i + i + 1);
    return (p);
}