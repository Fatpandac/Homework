#include<stdio.h>  

void  cut(int *p,int *q)
{   
    int  t;
    t=*p;
    *p=*q;
    *q=t;
}

int  main()
{        
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if  (a<b)
        cut(&a,&b);
    if  (a<c)  
        cut(&a,&c);
    printf("%d\n",a);
    return  0;
}