/*************************************************************************
	> File Name: 5.c
	> Author: 
	> Mail: 
	> Created Time: 2019年11月26日 星期二 11时02分29秒
 ************************************************************************/

#include<stdio.h>
int monthDays[13] = {-1 , 31 , 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
int main()
{
    int year, month, date;
    int days = 0;
    scanf("%d %d %d",&year,&month,&date);
    for(int y = 2012; y < year; ++y)
    {
        if( y % 4 == 0 && y % 100 != 0 ||year% 100 == 0) 
        {
            days += 366;
        }
        else
        days += 365;   
    }
    if( year % 4 == 0 && year % 100 !=0 ||year % 100 == 0)
        monthDays[2] = 29;
    for(int m = 1;m < month; ++ m)
        days += monthDays[m];
    days += date;
    days -= 22;
    printf("%d",days%7);
    return 0;
}
