/*************************************************************************
	> File Name: 20.c
	> Author: 
	> Mail: 
	> Created Time: 2019年11月27日 星期三 10时30分11秒
 ************************************************************************/

#include<stdio.h>
int main()
{
    int x,y,a = 0;
    scanf("%d %d",&x,&y);
    for(int i = x;i <= y;i ++)
    {
        if(i % 4 == 0 &&i % 100 != 0||i % 400 ==0)
        {
            a++;
        }
    }
    printf("%d",a);
    return 0;
}
