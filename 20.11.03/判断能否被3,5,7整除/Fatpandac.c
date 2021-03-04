#include <stdio.h>

int main(){
	int num;
	float num3,num5,num7;
	scanf("%d",&num);
	num3 = num*1.0/3;
	num5 = num*1.0/5;
	num7 = num*1.0/7;
	if (((int)num3-num3) == 0 && ((int)num5-num5) == 0 && ((int)num7-num7) == 0){
		printf("Can be divisible by 3,5,7.");
	}else if ((int)num3-num3 ==0 && (int)num5-num5 ==0){
		printf("Can be divisible by 3,5.");
	}else if ((int)num3-num3 ==0 && (int)num7-num7 ==0){
		printf("Can be divisible by 3,7.");
	}else if ((int)num5-num5 ==0 && (int)num7-num7 ==0){
		printf("Can be divisible by 5,7.");
	}else if ((int)num3-num3==0){
		printf("Can be divisible by 3.");
	}else if ((int)num5-num5 ==0){
		printf("Can be divisible by 5.");
	}else if ((int)num7-num7 ==0){
		printf("Can be divisible by 7.");
	}else{
		printf("Can not be divisible by 3,5,7.");
	}
	return 0;
}
