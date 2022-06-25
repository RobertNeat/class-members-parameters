#include "Date.h"
#include <iostream>

using namespace std;

Date::Date()
{
    y=1900;
    m=12;
    d=30;
}

void Date::input(){
    cout<<endl<<"Input date data:"<<endl<<"Year:";
    cin>>y;
    cout<<"Month:";
    cin>>m;
    cout<<"Day:";
    cin>>d;
}

void Date::display(){
    cout<<d<<"-"<<m<<"-"<<y;
}

Date::~Date()
{
}
