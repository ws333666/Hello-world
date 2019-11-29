/*************************************************************************
	> File Name: 26.c
	> Author: 
	> Mail: 
	> Created Time: 2019年11月28日 星期四 10时56分51秒
 ************************************************************************/

#include<stdio.h>
void swap(int *a,int *b) 
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    int n = 10;
    int i,j;
    int number[10];
    for(i = 0;i <= n - 1; i++)
    {
        scanf("%d",&number[i]);
    }
    for(i = 1;i <= n; i++)
    {
        for(j = 0;j < n - 1; j++)
        {
            if(number[j] < number[j + 1])
            {
                swap(&number[j],&number[j + 1]);
            }
        }
    }
    for(i = 0;i <= n - 1; i++)
    {
        printf("%d",number[i]);
        if(i < n - 1)
        {
            printf(" ");
        }
    }
    return 0;
}
