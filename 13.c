/*************************************************************************
	> File Name: 13.c
	> Author: 
	> Mail: 
	> Created Time: 2019年11月26日 星期二 20时56分50秒
 ************************************************************************/

#include<stdio.h>
int main()
{
    int n,a=1;
    scanf("%d",&n);
    for(int i = 0;i < n;i ++)
    {
     int temp;
        scanf("%d",&temp);
        a = a * temp;
    }
    printf("%d",a);


    return 0;
}
