//A system for blood pressure records
//use a vector for storing records
//Blood and Date, Patient class required

#include<iostream>
#include <vector>
using namespace std;
#include "Date.cpp"
#include "Patient.cpp"
#include "Blood.cpp"

//test code
int main() {
    Patient mary("Mary"); //Patient(string patient_name). creates object mary from Patient class with patient_name "Mary"
    Patient john("John"); 
    mary.addRecord(Blood(94,61, Date(2,5,2013))); //from patient object mary, access member functon addRercord(from class Patient)
    mary.addRecord(Blood(97,65, Date(3,5,2013)));//void Patient::addRecord(Blood record)
    mary.addRecord(Blood(144,99, Date(4,5,2013)));
    mary.addRecord(Blood(123,88, Date(5,5,2013)));
    mary.addRecord(Blood(177,110, Date(6,5,2013)));
    mary.addRecord(Blood(145,89, Date(7,5,2013)));

    john.addRecord(Blood(88,57, Date(15,5,2013)));
    john.addRecord(Blood(95,61, Date(16,5,2013)));
    john.addRecord(Blood(114,80, Date(17,5,2013)));
    john.addRecord(Blood(151,96, Date(18,5,2013)));
    john.addRecord(Blood(176,104, Date(19,5,2013)));
    john.addRecord(Blood(176,110, Date(20,5,2013)));
    
    john.printReport(); //from Patient  object john, acess the member function printReport (also from Patient)
    mary.printReport();
    return 0;
}