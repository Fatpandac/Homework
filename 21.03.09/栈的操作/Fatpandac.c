#include <stdio.h>
#include <string.h>

#define MaxSize 100

typedef struct
{
    char word[MaxSize];
    int top;
}SqStack;

void PrintStack(SqStack stack)
{
    printf("\e[32m");
    while (stack.top != -1)
    {
        printf("%c",stack.word[stack.top--]);
    }
    printf("\e[0m \n");
}

int Push(SqStack *stack,char sentence[MaxSize])
{
    for (int i = 0;i < strlen(sentence);i++)
    {
        stack->word[++stack->top] = sentence[i];
    }
    return 0;
}

char Pop(SqStack *stack)
{
    return (stack->word[stack->top--]);
}

int PopIndex(SqStack *stack,int index)
{
    char tmp[MaxSize];
    if (index < 0 || index > stack->top) return 0;
    for (int i = 0; i <= index; i++)
    {
        tmp[i] = (i == index) ? '\0' : Pop(stack);
    }
    Pop(stack);
    Push(stack,tmp);
    return 1;
}

int OutputStack(SqStack *stack)
{
    char popWord;
    while (stack->top != -1)
    { 
        printf("%c",Pop(stack));
    }
    return 0;
}

int Palindrome(SqStack *stack,char inputSentence[MaxSize])
{
    char outputSentence[MaxSize];
    Push(stack,inputSentence);
    for (int i = 0; i <= strlen(inputSentence); i++)
    {
        outputSentence[i] = (i == strlen(inputSentence)) ? '\0' : Pop(stack);
    }
    return (!strcmp(inputSentence,outputSentence)) ? 1 : 0 ;
}

int BeOctal(SqStack *stack,int num)
{
    while (num)
    {
        stack->word[++stack->top] = num % 8 + 48;
        num = num / 8;
    }
    OutputStack(stack);
    return 0;
}

int main()
{
    SqStack stack;
    stack.top = -1;
    Push(&stack,"HelloWorld!");     //构建栈
    PrintStack(stack);
    printf("%c\n",Pop(&stack));     //读取栈顶
    PrintStack(stack);
    printf("%s\n",(PopIndex(&stack,9)) ? "\e[32mRemove Success\e[0m" : "\e[31mRemove Error\e[0m");             //从栈中删除元素
    OutputStack(&stack);            //输出全栈
    printf("\n%s\n",Palindrome(&stack,"abcdedcba") ? "\e[32mYes\e[0m" : "\e[31mNo\e[0m");     //回文判断
    BeOctal(&stack,60);
    return 0;
}
