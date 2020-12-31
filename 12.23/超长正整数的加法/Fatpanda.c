#include<stdio.h>
#include<string.h>

int i,j;

void reversol(char numlist[81])
{
	char tmp;
	for (i = strlen(numlist)-1,j = 0; i > j ; i--,j++)
	{
		tmp = numlist[j];numlist[j] = numlist[i];numlist[i] = tmp;
	}
}

void add(char numlist1[81],char numlist2[81])
{
	printf("%s %s\n",numlist1,numlist2);
	for (i = 0,j = 0; j < strlen(numlist2); i++,j++)
	{
		
		if (numlist1[i]+numlist2[j]>=106)
		{
			numlist1[i] += numlist2[j] - 58;
			if (i+1 >= strlen(numlist1))
			{
				numlist1[i+1] = 49;
				numlist1[i+2] = '\0';
			}else{
				numlist1[i+1]++;
			}
		}else{
			numlist1[i] += numlist2[j] - 48;
		}
	}
	reversol(numlist1);
	for (i = 0; i < strlen(numlist1); i++)
	{
		if (numlist1[i] != '0')
		{
			for (; i < strlen(numlist1); i++)
			{
				printf("%c",numlist1[i]);
			}
			break;
		}
	}
}

int main()
{
	char numlist1[81],numlist2[81],tmp[81];
	scanf("%s\n%s",numlist1,numlist2);
	reversol(numlist1);
	reversol(numlist2);
	if (strlen(numlist1)<strlen(numlist2))
	{
		strcpy(tmp,numlist1);
		strcpy(numlist1,numlist2);
		strcpy(numlist2,tmp);
	}
	add(numlist1,numlist2);
	return 0;
}