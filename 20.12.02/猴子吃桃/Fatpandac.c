#include<stdio.h>

int  fun(int  d){
    return (d==10)?1:fun(d+1)*2+2;
}

int  main(){
        int  day,num;
        scanf("%d",&day);
        num=fun(day);
        printf("%d",num);
        return  0;
}