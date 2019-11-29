/*************************************************************************
	> File Name: 22.c
	> Author: 
	> Mail: 
	> Created Time: 2019年11月27日 星期三 12时36分27秒
 ************************************************************************/

#include<stdio.h>
int main()
{
    int y,m,d;
    scanf("%d %d %d",&y,&m,&d);
    if(m == 1 && d == 1)
    {
        printf("%d 12 31\n",y - 1);
        printf("%d %d %d",y,m,n + 1);
    }
    else if(m == 12 && d == 31)
    {
        printf("%d %d %d",y,m,d - 1);
        printf("%d 1 1",y + 1);
    }
    return 0;
}
