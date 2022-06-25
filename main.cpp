#include <iostream>
#include <string>

#include "Date.h"
#include "Person.h"

using namespace std;

void inst(){cout<<endl<<"@instances:"<<Person::getInstanceCount()<<endl;}

int main()
{
    inst();

    //creating object 1
    Person Adam;
    cout<<endl<<"Created:";
    Adam.display();
    inst();

    //creating object 2
    Person John("John","Kovalsky",Date(26,0,2021));
    cout<<endl<<"Created:";
    John.display();
    inst();

    cout<<"Name and Surname:"<<John.GetSurnameName()<<endl;
    inst();
    cout<<"Age difference: "<<John.ageDifference(Adam)<<endl;
    inst();
    cout<<"Person with longer surname:";
    John.longerSurname(Adam).display();

    return 0;
}
