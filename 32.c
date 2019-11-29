/*************************************************************************
	> File Name: 32.c
	> Author: 
	> Mail: 
	> Created Time: 2019年11月28日 星期四 15时36分33秒
 ************************************************************************/

#include<stdio.h>
int main()
{
    int i, n;
    scanf("%d",&n);
    int number[51];
    number[0] = 1;
    number[1] = 0;
    number[2] = 1;
    number[3] = 1;
    for(i = 4; i <= n; i++)
    {
        number[i] = number[i - 2] + number[i - 3];
    }
    printf("%d",number[n]);
    return 0;
}
