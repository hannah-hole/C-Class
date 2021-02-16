//Blood(88,57, Date(15,5,2013))
#include "Blood.hpp"
#include "Date.hpp"
using namespace std; 

//corresponds to public functions in Blood.hpp
Blood::Blood(const int systolic, const int diastolic, const Date date): //constructor like in Blood.hpp except we add the vars 
date(date){ //date variable given by Date class. create default constructor  
    this-> systolic=systolic; //this pointer gets the systolic object hidden by local variable systolic 
    this-> diastolic=diastolic;
}

int Blood::getSystolic(){ 
    return this -> systolic; 
}

int Blood::getDiastolic(){
    return this-> diastolic; 
}

Date Blood::getDate(){
    return this-> date;
}

void Blood::print() {
    cout<<"Systolic: "<<systolic<<" Diastolic: "<<diastolic<< " Date: "<< date.getDay()<<"/"<<date.getMonth()<<"/"<<date.getYear()<<endl; //must add endl to separate records onto different lines
} 