#include <stdio.h>
#include <string.h>

#define MaxSize 100

typedef struct
{
    char sentence[MaxSize];
    int top;
}SqStack;

int Palindrome(char inputSentence[MaxSize])
{
    int inputSentenceLenght = strlen(inputSentence)-1;
    int halfIndex = inputSentenceLenght/2;
    SqStack stackSentence;
    stackSentence.top = -1;
    for (int i = 0;i <= halfIndex;i++)
    {
        stackSentence.sentence[++stackSentence.top] = inputSentence[inputSentenceLenght-i];
    }
    for (int i = halfIndex;i >= 0;i--)
    {
        if (stackSentence.sentence[stackSentence.top--] != inputSentence[i])
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    char inputSentence[MaxSize];
    scanf("%s",inputSentence);
    printf("%s\n",Palindrome(inputSentence) ? "Yes" : "No");
    return 0;
}
