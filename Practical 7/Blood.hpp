#ifndef BloodPressure_hpp //is an include guard. helps to avoid double inclusion
#define BloodPressure_hpp
#include "Date.hpp"
#include<stdio.h>
#include<iostream>
using namespace std; 

class Blood{ 
protected:
 int systolic, diastolic; 
 Date date; //from date class

public:
    Blood(const int, const int, const Date); 
    int getSystolic();
    int getDiastolic();
    Date getDate();
    void print();
};
#endif