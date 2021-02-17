//  mary.addRecord(Blood(94,61, Date(2,5,2013)));
#ifndef Patient_hpp
#define Patient_hpp
#include<iostream>
#include<stdio.h>
#include<vector> //need this to refer to vector type. 
#include "Blood.hpp"
#include "Date.hpp"
using namespace std; 

class Patient //base class. check is not virtual 
{
    protected:
        string patient_name;
        vector<Blood> table; //dynamic array of element types Blood. vector is class template 
    public:
        Patient(string); //constructor 
        void addRecord(Blood); //member functions 
        void print();
        void printReport(); 
};

#endif