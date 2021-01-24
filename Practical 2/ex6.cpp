//Exercise 6: recursive Fibonacci
//display nth number and number of recurisve calls using global variable .
//(0) 1, 1, 2, 3, 5, 8, 13, 21, 34, 

#include<iostream>
using namespace std;
int calls=0; //define global variable to keep track of number of calls

int fib(int k){
    calls++;
    if((k==0)||(k==1))
    {
        return k;
    }
    else 
    {
        return fib(k-1)+fib(k-2);
    } 
}
int main(){
    int n, i, n_calls;
    cout<<"Enter number of terms: ";
    cin>>n;
       for(i=1; i<n; i++){
        calls=0; //reset to 0 
        fib(i); //call fibonacci function 
        n_calls=calls; 
    } 
    cout<<"The nth term is: "<<fib(i)<<endl; 
    cout<<"The number of recursive calls is: "<<n_calls; 
    return 0;    

}
