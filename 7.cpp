/*************************************************************************
	> File Name: 7.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年11月26日 星期二 19时55分25秒
 ************************************************************************/

#include<iostream>
using namespace std;
int main()
{
    int y;
    cin >>y;
    y += 2400;
    int t = (y - 1900) % 12;
    switch(t){
        case 0:cout<<"rat"<<endl;break;
        case 1:cout<<"ox"<<endl;break;
        case 2:cout<<"tiger"<<endl;break;
        case 3:cout<<"rabbit"<<endl;break;
        case 4:cout<<"dragon"<<endl;break;
        case 5:cout<<"snake"<<endl;break;
        case 6:cout<<"horse"<<endl;break;
        case 7:cout<<"sheep"<<endl;break;
        case 8:cout<<"monkey"<<endl;break;
        case 9:cout<<"rooster"<<endl;break;
        case 10:cout<<"dog"<<endl;break;
        case 11:cout<<"pig"<<endl;break;
    }
    return 0;
}
