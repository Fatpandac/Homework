#include <stdio.h>

typedef struct{
	int hour;
	int minutes;
	int seconds;
}Data;

int input(Data *data)
{
	int newtime;
	scanf("输入时间值时分秒，以xx:xx:xx的格式\n %d:%d:%d",&data->hour,&data->minutes,&data->seconds);
	scanf(" %d",&newtime);
	return newtime;
}

void addtime(Data data,int newtime)
{
	data.seconds += newtime;
	if(data.seconds-60 >= 0)
	{
		data.seconds -=60;
		data.minutes += 1;
		if(data.minutes-60 >= 0)
		{
			data.minutes -= 60;
			data.hour +=1;
		}
	}
	printf("新时间是%d小时%d分%d秒",data.hour,data.minutes,data.seconds);
}

int main()
{
	Data data;
	addtime(data,input(&data));
	return 0;
}

