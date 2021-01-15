//ex5: non recursive Fibonacci
//0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 
//test with (i==0 ||i==1)

#include<iostream>
using namespace std; 
int main(){
    int n, n_term, a=0, b=1; //a is first term, b is second term, n is number of terms, n_term is the nth term
    cout<<"Enter n: ";
    cin>>n;
    for (int i=1; i<=n; i++){
        if(i==1){
            n_term=a;
            continue; //continue lets us execute i==1 AND i==2 
        } 
        if(i==2){
            n_term=b; 
            continue; 
        }
            n_term=a+b;
            a=b; //(n-2)th term. a becomes b. note a=b is NOT same as b=a
            b=n_term; //(n-1)th term. b becomes last number
    }
    cout<<n_term; //output nth term 
    return 0; 
}
