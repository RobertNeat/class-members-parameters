#ifndef PERSON_H
#define PERSON_H

#include <string>
#include "Date.h"

using namespace std;

class Person
{
    private:
        string name;
        string surname;
        string motto;
        Date bornDate;
        static string college;
        static int instanceCount;

    public:
        Person();
        Person(const string &name,const string &surname, const Date &bornDate);

        void read();
        void display();

        string GetSurnameName();
        int ageDifference(Person person);
        Person longerSurname(Person person);
        static int getInstanceCount();

        ~Person();
};

#endif // PERSON_H
