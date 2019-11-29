/*************************************************************************
	> File Name: 24.c
	> Author: 
	> Mail: 
	> Created Time: 2019年11月27日 星期三 19时22分30秒
 ************************************************************************/

#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int sum[501]; 
    sum[0] =1;sum[1] =0;sum[2] =1;sum[3] =1;
    for(i = 4;i <= n;i ++)
    {
        sum[i]= sum[i - 2]+ sum[i - 3];
    }
    printf("%d".sum[n]);
    return 0;
}
