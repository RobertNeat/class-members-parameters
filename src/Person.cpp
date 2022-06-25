#include "Person.h"
#include "Date.h"

#include <iostream>
#include <string>

using namespace std;

int Person::instanceCount=0;
string Person::college="Politechnika Lubelska";

Person::Person()
{
    name="Adam";
    surname="Kovalsky";
    bornDate=Date();
    motto="People build too many walls, too little bridges.";
    instanceCount++;
    cout<<"\t#Creating object ("<<this->GetSurnameName()<<")"<<endl;
}

Person::Person(const string &name, const string &surname, const Date &bornDate){
    this->name=name;
    this->surname=surname;
    this->bornDate=bornDate;
    motto="Be happy - this is the thing to learn.";
    instanceCount++;
    cout<<"\t#Creating object ("<<this->GetSurnameName()<<")"<<endl;
}

void Person::read(){
    cout<<"Input name:";
    cin>>name;
    cout<<"Input surname:";
    cin>>surname;
    bornDate.input();
    cout<<"Input motto:";
    getline(cin,motto);
}

void Person::display(){
    cout<<name<<" "<<surname<<" born_date: ";
    bornDate.display();
    cout<<", motto: "<<motto;
    cout<<", university: "<<college;
}

string Person::GetSurnameName(){
    return name+" "+surname;
}

int Person::ageDifference(Person person){
    int a=bornDate.getY()-person.bornDate.getY();
    if(a<0){a=-a;}
    return a;
}

Person Person::longerSurname(Person person){
    if(name.length()<person.surname.length()){return person;}
    else{return *this;}
}

int Person::getInstanceCount(){return instanceCount;}

Person::~Person()
{
    cout<<endl<<"\t#Destructing object ("<<this->GetSurnameName()<<")"<<endl;
    instanceCount--;
}
