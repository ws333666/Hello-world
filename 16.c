/*************************************************************************
	> File Name: 16.c
	> Author: 
	> Mail: 
	> Created Time: 2019年11月26日 星期二 22时55分38秒
 ************************************************************************/

#include<stdio.h>
int main()
{
    int a,b,c,d;
    scanf("%d %d\n%d %d",&a,&b,&c,&d);
    if(c >=a && d >=b)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}
