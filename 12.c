/*************************************************************************
	> File Name: 12.c
	> Author: 
	> Mail: 
	> Created Time: 2019年11月26日 星期二 20时10分06秒
 ************************************************************************/

#include<stdio.h>
int main()
{
    int sum = 0,n;
    scanf("%d",&n);
    for(int i = 0;i < n;i ++)
    {
        int temp;
        scanf("%d",&temp);
        sum +=temp;
    }
    printf("%.2f",1.0 * sum / n);
}
