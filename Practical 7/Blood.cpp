#include "Blood.hpp"
#include "Date.hpp"
using namespace std; 

//corresponds to public functions in Blood.hpp
Blood::Blood(const int systolic, const int diastolic, const Date date):
date(date){
    this-> systolic=systolic;
    this->diastolic=diastolic;
}

int Blood::getSystolic(){ //
    return this -> systolic; 
}

int Blood::getDiastolic(){
    return this-> diastolic; 
}

Date Blood::getDate(){
    return this-> date;
}

void Blood::print() {
    cout<<"Systolic: "<<systolic<<" Diastolic: "<<diastolic<< " Date: "<< date.getDay()<<"/"<<date.getMonth()<<"/"<<date.getYear()<<endl; 
} 