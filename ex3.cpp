//Exercise 3: Swap numbers (by reference)

#include<iostream>
using namespace std;

//Define function 
int swap(int *x, int *y) //*indicates pointer variable 
{
    int temp;
    temp=*x; 
    *x=*y;
    *y=temp;
    return *x, *y; 
}

int main(){
    int x, y;
    cout<<"Enter x and y:";
    cin>>x>>y;
    swap(&x, &y); //&indicates address operator
    cout<<"x: "<<x<<" y: "<< y ;
    return 0;
}
