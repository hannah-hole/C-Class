#ifndef Patient_hpp
#define Patient_hpp
#include<iostream>
#include<stdio.h>
#include<vector> //vector template 
#include "Blood.hpp"
#include "Date.hpp"
using namespace std; 

class Patient //base class. check is not virtual 
{
    protected:
        string patient_name;
        vector<Blood> table; //class template vector 
    public:
        Patient(string);
        void addRecord(Blood); 
        void print();
        void printReport(); 
};

#endif