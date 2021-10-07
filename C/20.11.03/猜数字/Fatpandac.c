#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
    int number = rand() % 10 + 1;
	srand(time(NULL));
    while (1) {
        int i;
        char answer;
        scanf("%d", &number);
        printf("Please guess the number between 1 and 10:\n ");
        for (i = 0; i < 6; ++i) {
            int guess;
            scanf("%d",&guess);
            if (guess == number) {
                switch (i + 1) {
                case 1:printf("Bingo!\n");
                    break;
                case 2:
                case 3:printf("Lucky you!\n");
                    break;
                case 4:
                case 5:
                case 6:printf("Good Guess!\n");
                    break;
                }
                break;
            }
            else if (guess < number) {
                printf("\nToo small.\nTry again:\n");
            }
            else {
                printf("\nToo big.\nTry again:\n");
            }
        }
        if (i == 6) {
            printf("Game Over\n");
        }
        printf("Do you wanna play again? If yes, press Y or y. Otherwise press N or n.\n");
        scanf(" %c",&answer);
        if (tolower(answer) == 'y') {

        }else {
            break;
        }
    }
    return 0;
}
int tolower(char answer)
{
    if (answer >= 65 && answer < 90)
        return answer + 32;
    if (answer >= 97 && answer <= 122)
        return answer;
    else
        return answer;
}
