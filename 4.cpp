/*************************************************************************
	> File Name: 4.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年11月26日 星期二 09时49分48秒
 ************************************************************************/

#include<iostream>
#include <string>
using namespace std;
string weekdays[] = {
    "monday", "tuesday", "wednesday", "thursday", "friday", "saturday", "sunday"
};
int main()
{
    int n;
    cin >> n;
    if(n > 7 || n < 1)
    {
        cout << "illegal";
    }
    else
    cout << weekdays[n - 1];
    return 0;
}
