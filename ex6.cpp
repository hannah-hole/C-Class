//ex 6: recursive Fibonacci
//display nth number and number of recurisve calls using global variable 
//0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 
#include<iostream>
using namespace std;
int x=k; 

int fib(int k){
    if((k==1)||(k==0)){
        return k;
    }
    else {
        return (fib(k-1)+fib(k-2));
        } 
}
int main(){
    int n, i=0, k ;
    cout<<"Enter number of terms: ";
    cin>>n;
    while(i<n-1){
        fib(i); 
        i++;
    }
    cout<<"The nth term is: "<<fib(i); 
    cout<<"The number of recursive calls: "<<k; 
    return 0;    

}
