//Blood(88,57, Date(15,5,2013))
#ifndef BloodPressure_hpp //is an include guard. helps to avoid double inclusion
#define BloodPressure_hpp
#include "Date.hpp"
#include<stdio.h>
#include<iostream>
using namespace std; 

class Blood{ 
protected: //declare member variables that will store the data and are accessible within the same class/subclass 
 int systolic, diastolic; 
 Date date; //date variable, as specified in the format given by the class Date 

public:  //Blood(88,57, Date(15,5,2013)); we can see it has sys, dias, then date function 
    Blood(const int, const int, const Date); //constructor is a member function. sets up initial value of the member variables being created 
    int getSystolic();
    int getDiastolic();
    Date getDate();
    void print();
};
#endif