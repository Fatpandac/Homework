#include <stdio.h>
#include <string.h>

int main()
{
	int numberSum=0, wordSum=0,word;

	while ((word = getchar()) != EOF)
	{
		if (('a' <= word && word <= 'z') || ('A'<=word && word<='Z'))
		{
			wordSum++;
		}
		else if(word >= 48 && word <= 57)
		{
			numberSum++;
		}
	}
	printf("%d %d\n", wordSum,numberSum);
}