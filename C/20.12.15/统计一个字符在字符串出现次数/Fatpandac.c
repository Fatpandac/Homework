#include <stdio.h>
#include <string.h>

int search(char content[],char word)
{
    int i,count=0;
    for (i = 0; i < strlen(content); i++)
    {
        if (content[i] == word)
        {
            count++;
        }
    }
    return count;
}

int main()
{
    char word,content[40];
    scanf("%c ",&word);
    scanf("%s",content);                                      
    printf("%d",search(content,word));
    return 0;    
}