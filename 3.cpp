/*************************************************************************
	> File Name: 3.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年11月24日 星期日 20时35分19秒
 ************************************************************************/

#include<stdio.h>
int main()
{
    int a,b,flag=0;
    scanf("%d %d",&a,&b);
    for(int i = a;i <= b;i ++)
    {
        if(i % 11 ==0)
        {
            if(flag)
            printf(" ");
            flag ++;
            printf("%d",i);
        }
    }
}
