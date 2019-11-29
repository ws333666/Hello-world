/*************************************************************************
	> File Name: 15.c
	> Author: 
	> Mail: 
	> Created Time: 2019年11月26日 星期二 21时21分21秒
 ************************************************************************/

#include<stdio.h>
int main()
{
    int n,a = 0;
    scanf("%d",&n);
    for(int i = 0;i < n;i ++)
    {
        int temp;
        scanf("%d",&temp);
            a =i;
            if(i <a)
            {
                a = i;
            }
    }
    printf("%d",a);
    return 0;
}
