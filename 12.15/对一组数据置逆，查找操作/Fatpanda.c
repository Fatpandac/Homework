#include <stdio.h>

int i=0,j=0;

void input(int a[],int n)
{
	printf("\n输入数据：");
	for (i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
}

void output(int a[],int n)
{
	printf("\n置逆后：\n");
	for (i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
}

void reserve(int a[],int n)
{
	int temp;
	for (i=0,j=n-1;i<j;i++,j--)
	{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
	}
}

int find(int a[],int n,int x)
{
	int flag=0;
	for (i=0;i<n;i++)
	{
		if(a[i]==x)
		{
			flag = i;
			break;
		}
	}
	return flag;
}

int main()
{
	int a[20],n,x,index;
	printf("n=");
	scanf("%d",&n);
	input(a,n);
	reserve(a,n);
	output(a,n);
	for (j=0;j<3;j++)
	{
		printf("\nx=");
		scanf("%d",&x);
		if ((index=find(a,n,x))>0)
		{
			printf("\n下标=%d",index);
		}
		else
		{
			printf("\n没找到");
		}
	}
	return 0;
}