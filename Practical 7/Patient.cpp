#include "Blood.hpp"
#include "Patient.hpp"
using namespace std;

Patient::Patient(string patient_name){ //default constructor  (like  member function Patient)
    this -> patient_name=patient_name;
    this -> table = vector<Blood>(); //vector<Blood> table
}
void Patient::addRecord(Blood record){ // void addRecord(Blood); from class Patient,get member function addRecord which has var record of Blood type 
    return this -> table.push_back(record);//in the table, perform the function push_back that adds a record to the end of the table
}

void Patient::print(){ //specify print member function from class Patient
    cout<<"Patient: "<<patient_name<<endl;
    for(int i=0;i <table.size();i++){ //for every record in the table, output each element at index i 
      return this-> table[i].print();
    }
}

void Patient::printReport(){ //from Patient class, specify the printReport member function that 
    int max_measurement=140;

    //print vector highest abnormal systolic blood pressure and date 
    vector<Blood> max_systolic=vector<Blood>(); //**

    //average diastolic blood pressure;
    double avg_diastolic = 0.0; //init variable

    for(int i=0;i<table.size(); i++){
        avg_diastolic+=table[i].getDiastolic();//add up diastolic values to get average 

        if(table[i].getSystolic()>max_measurement){ //if systolic value is >140
            max_systolic.clear(); //clear the vector table
            max_systolic.push_back(table[i]); //add the value from the table into the vector max_systolic
            max_measurement=table[i].getSystolic();
        }
        else if(table[i].getSystolic()==max_measurement){ //if there is another reading equivalent to the largest reading, add it on
            max_systolic.push_back(table[i]);
        }
    }
//list of maximum pressure records 
cout<<"--------Patient report: "<<patient_name<<"--------"<<endl;
if(max_systolic.size()==0) //if there are no values in the max_systolic vector output below
    cout<<"no measure was too high"<<endl;
else {
    cout << "Patient has abnormal systolic readings"<<endl; 
    for(int i=0; i<max_systolic.size(); i++){ //else the patients readings are high and we need to output each index of the vector
        max_systolic[i].print();
    }
}
 cout<<"Average diastolic pressure: "<<avg_diastolic/table.size()<<endl; //calculate the average diastolic pressure 

}