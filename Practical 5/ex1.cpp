//ex1: Only digits function
//Define a C++ function that check whether a given string contains only digits


#include<iostream>
using namespace std; 

bool check_string(string str, int length)
{
    for(int i=0; i<length; i++){ 
        if(str[i]<'0'||str[i]>'9')//|| or 
            return false;
        else return true;
    }

}

int main(){
    string term;
    cout<<"Enter string: ";
    cin>>term;
    int len=term.length(); 
    if(check_string(term, len))
        cout<<"True - Contains only digits";
    else
        cout<<"False - Contains characters";
    return 0;    
}