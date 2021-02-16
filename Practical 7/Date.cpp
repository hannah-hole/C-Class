//Blood(88,57, Date(15,5,2013))
#include "Date.hpp"
using namespace std;

Date::Date(const int day, const int month, const int year){ //same as constructor in .hpp except we add vars 'day, month, year'
    this->day=day; //this pointer gets object month, hidden by local variable month
    this->month=month;
    this-> year=year;
}

int Date::getDay(){ //scope resolution operator ::, helps us get access getDay member function from class Date
    return this->day; //pass return by value (copy of value will be returned )
}

int Date::getMonth(){ //same 'int getMonth();' member function from .hpp except we specify what the func needs to do 
    return this-> month;
}

int Date::getYear(){
    return this -> year; 
}

void Date::print(){
    cout<<day<<"/"<<month<<"/"<<year;
}

