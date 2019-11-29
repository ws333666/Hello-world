/*************************************************************************
	> File Name: 5.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年11月26日 星期二 15时31分34秒
 ************************************************************************/

#include <iostream>
#include <string>
using namespace std;
string shengxiao[] = {
    "rat","ox","tiger","rabbit","dragon","snake","horse","sheep","monkey","rooster","dog","pig"
};
int main()
{
    int year;
    cin>>year;
    cout<<shengxiao[year - 1];
}
