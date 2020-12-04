#include <stdio.h>
#include <string.h>

int main()
{
    char sentence[50];
    int i = 0, n, j;
    gets(sentence);
    n = strlen(sentence);
    for (j = n - 1;j >= 0; j--)
    {
        if (sentence[i] != sentence[j])
        {
            printf("No");
            break;
        }
        if ((j - i) < 1)
        {
            printf("Yes");
            break;
        }
        i++;
    }
    return 0;
}