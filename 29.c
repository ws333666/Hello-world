/*************************************************************************
	> File Name: 29.c
	> Author: 
	> Mail: 
	> Created Time: 2019年11月28日 星期四 13时32分01秒
 ************************************************************************/

#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i = 2; i <= n; i++)
    {
        int f = 1;
        for(int j = 2;j < i; j++)
        {
            if(i % j == 0)
            {
                f = 0;
            }
        }
        if(f)
        {
            printf("%d\n",i);
        }
    }

}