/*************************************************************************
	> File Name: 28.c
	> Author: 
	> Mail: 
	> Created Time: 2019年11月28日 星期四 13时11分25秒
 ************************************************************************/

#include<stdio.h>
#include <string.h>
int n = 1000000;
int mark[1000001];
 
int main()
{
    int a, b, i;
    scanf("%d %d",&a, &b);
    memset(mark, 0, sizeof(mark));
    mark[0] = 1;
    mark[1] = 1;

    for(i = 2; i * i <= a; i++)
    {
        if(mark[i] != 1)
        {
            for(int j = 2; j <= a / i; j++)
            {
                mark[i * j] = 1;
            }
        }
    }
    for(i = b; i <= a; i++)
    {
        if(mark[i] != 1)
        {
            printf("%d\n",i);
        }
    }
    return 0;
}
