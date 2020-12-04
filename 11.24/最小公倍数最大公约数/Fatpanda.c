#include <stdio.h>

int main() {
    int number1, number2, other, cdivisor, cmultiple;
    scanf("%d %d", &number1, &number2);
    cdivisor = other = number2 % number1;
    while (other != 0)
    {
        cdivisor = other;
        other = number2 % other;
    }
    if (cdivisor == 0)
    {
        cdivisor = number1;
    }
    cmultiple = number1 * number2 / cdivisor;
    printf("最大公约数：%d\n", cdivisor);
    printf("最小公倍数：%d", cmultiple);
    return 0;
}