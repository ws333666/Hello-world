/*************************************************************************
	> File Name: 4.c
	> Author: 
	> Mail: 
	> Created Time: 2019年11月26日 星期二 15时05分47秒
 ************************************************************************/

#include<stdio.h>
#define max_num 10000000
char isprime[max_num + 10];
int main()
{
    for(int i = 2;i <= max_num;i ++)
    
        isprime[i] = 1;
        for(int i = 2;i <= max_num; i ++)
        {
            if(isprime[i])
            for(int j = 2 * i;j <= max_num;j += i)
            isprime[j] = 0;
        }
        for(int i = 2;i <= max_num; i++)
            if( isprime[i] )
        printf("%d",i);
    
    return 0;
}
