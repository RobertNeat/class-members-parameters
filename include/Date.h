#ifndef DATE_H
#define DATE_H


class Date
{
    private:
        int d,m,y;
    public:
        Date();
        Date(int day, int month, int year):d(day),m(month),y(year){};
        ~Date();

        void input();
        void display();
        int getY(){return y;}
};

#endif // DATE_H
