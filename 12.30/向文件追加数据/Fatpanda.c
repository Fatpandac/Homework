#include <stdio.h>

int main()
{
    FILE *fp = fopen("in.txt","r");
    FILE *fp1= fopen("in.txt","a");
    int num1[7],num2[7];
    fscanf(fp,"%d %d %d %d %d %d %d",&num1[0],&num1[1],&num1[2],&num1[3],&num1[4],&num1[5],&num1[6]);
    fscanf(fp,"%d %d %d %d %d %d %d",&num2[0],&num2[1],&num2[2],&num2[3],&num2[4],&num2[5],&num2[6]);
    fprintf(fp1,"\n%d %d %d %d %d %d %d",num1[0]+num2[0],num1[1]+num2[1],num1[2]+num2[2],num1[3]+num2[3],num1[4]+num2[4],num1[5]+num2[5],num1[6]+num2[6]);
    fclose(fp);
    fclose(fp1);
    return 0;
} 