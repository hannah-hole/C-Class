#include "Blood.hpp"
#include "Patient.hpp"
using namespace std;

Patient::Patient(string patient_name){
    this -> patient_name=patient_name;
    this -> table = vector<Blood>(); 
}

void Patient::addRecord(Blood record){
    this -> table.push_back(record);//adds a record to the end of the table
}

void Patient::print(){
    cout<<"Patient: "<<patient_name<<endl;
    for(int i=0;i <this-> table.size();i++){
        this-> table[i].print();
    }
}

void Patient::printReport(){
    int max_measurement=140;

    //print vector highest abnormal systolic blood pressure and date 
    vector<Blood> max_systolic=vector<Blood>();
    //if <140, "no measurement was too high"

    //average diastolic blood pressure;
    double avg_diastolic = 0.0; //init variable

    for(int i=0;i< this->table.size(); i++){
        avg_diastolic+=table[i].getDiastolic();//add up to get average later
        if(table[i].getSystolic()>max_measurement){
            max_systolic.clear();
            max_systolic.push_back(table[i]);
            max_measurement=table[i].getSystolic();
        }
        else if(table[i].getSystolic()==max_measurement){
            max_systolic.push_back(table[i]);
        }
    }
    //list of maximum pressure records 
cout<<"--------Patient report: "<<patient_name<<"--------"<<endl;
if(max_systolic.size()==0)
    cout<<"no measure was too high"<<endl;
else {
    cout << "abnormal systolic blood pressure"<<endl;
    for(int i=0; i<max_systolic.size(); i++){
        //cout<<"\t";
        max_systolic[i].print();
    }
}
 cout<<"average diastolic pressure: "<<avg_diastolic/table.size()<<endl;

}