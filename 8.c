/*************************************************************************
	> File Name: 8.c
	> Author: 
	> Mail: 
	> Created Time: 2019年11月26日 星期二 17时11分08秒
 ************************************************************************/

#include<stdio.h>
int main()
{
    double m,n;
    int p;
    scanf("%lf %lf %d",&m,&n,&p);
    switch (p)
    {
        case 0:
        printf("%.2f",(0.973 * m + n) / 2);
        break;
        case 1:
        printf("%.2f",(m + n) * 1.087 / 2);
        break;
    }
    return 0;
}
