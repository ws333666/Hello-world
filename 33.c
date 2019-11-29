/*************************************************************************
	> File Name: 33.c
	> Author: 
	> Mail: 
	> Created Time: 2019年11月28日 星期四 15时46分24秒
 ************************************************************************/

#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i = 1; i <= n; i++)
    {
        for(int j = 0; j < n - i; j++)
        {
            printf(" ");
        }
        for(int j = 0; j < i * 2 - 1; j++)
        {
            printf("%c",(char)'A' + i -1);
        }
        printf("\n");
    }
    for(int i = 1; i < n; i++)
    {
        for(int j = 1; j <= i; j++)
        {
            printf(" ");
        }
        for(int j = 0;j < 2 * (n - i) - 1; j++)
        {
            printf("%c",(char)'A'+ n - i - 1);
        }
        printf("\n");
    }
    return 0;
}
