//Blood(88,57, Date(15,5,2013))
#ifndef Date_hpp //is an include guard. helps to avoid double inclusion
#define Date_hpp 
#include<stdio.h> //in and out library 
#include<iostream>
using namespace std;

class Date{ //create class - always put these in header .hpp file
    protected: //access specifier - members accessible only within class and subclass. they store the data for the date
     int day; //declare 3 member variables - variables that characterise the state of the objects of the class
     int month;
     int year;
    
    public: //access specfier- can access outside class. public functions are the INTERFACE
     Date (const int, const int, const int); //constructor - initialises an object 
     int getDay(); //declare 4 member functions
     int getMonth();
     int getYear();
     void print();    
};
#endif