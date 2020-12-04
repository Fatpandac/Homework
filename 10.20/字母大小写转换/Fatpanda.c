#include <stdio.h>
int topper(char word);
int main()
{
	char word;
	scanf("%c",&word);
	printf("%c",topper(word));
	return 0;
}
int topper(char word)
{	
	if (word>=65 && word<90) 
		return word+32;
	if (word>=97 && word<=122)
		return word-32;
	else
		return word;
}