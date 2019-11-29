/*************************************************************************
	> File Name: 3.c
	> Author: 
	> Mail: 
	> Created Time: 2019年11月25日 星期一 10时39分47秒
 ************************************************************************/

#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i = n;i >=1;i --)
    {
        printf("%d",i);
        for(int j = i - 1;j >= 1;j --)
        {
            printf(" %d",j);
        }
        printf("\n");
    }
    return 0;
}
