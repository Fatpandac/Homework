#include <stdio.h>

int user = 1;

void inviteUser(int day)
{
    for (int i = 0; i < day; i++)
    {
        if (i > 7)
        {
            int tmpDay = (i - 7) % 3;
            if(tmpDay == 0)
            {
                user++;
                inviteUser(day-i);
                continue;
            }   
        }
        if (i == 7)
        {
            user++;
            inviteUser(day-i);
        }
    }
}

int main()
{
    int day;
    scanf("%d",&day);
    inviteUser(day);
    printf("%d",user);
    return 0;
}