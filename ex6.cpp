//ex 6: recursive Fibonacci
//display nth number and number of recurisve calls using global variable . 2*F(n)-1 is the formula 
//(0) 1, 1, 2, 3, 5, 8, 13, 21, 34, 
//HH to check what values others got 

// #include<iostream>
// using namespace std;
// int calls=0; //define global variable 

// int fib(int k){
//     calls++;
//     if((k==1)||(k==0)){
//         return 1;
//     }
//     else {
//         return (fib(k-1)+fib(k-2));
//         } 
//     return k; 
// }
// int main(){
//     int n, i;
//     cout<<"Enter number of terms: ";
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         calls=0;
//         //fib(i);
//         cout<<"The nth term is: "<<fib(i)<<endl; 
//     }
   
//     cout<<"The number of recursive calls is: "<<calls<<endl; 
//     return 0;    

// }


#include<iostream>
using namespace std;
int calls=0; //define global variable 

int fib(int k){
    calls++;
    if((k==1)||(k==0)){
        return k;
    }
    else {
        return fib(k-1)+fib(k-2);
        } 
}
int main(){
    int n, i, n_calls;
    cout<<"Enter number of terms: ";
    cin>>n;
       for(i=1; i<n; i++){
        calls=0;
        fib(i); 
        n_calls=calls-1;
        //cout<<calls<<" calls\n";
    } 
    cout<<"The nth term is: "<<fib(i)<<endl; 
    cout<<"The number of recursive calls is: "<<n_calls; 
    return 0;    

}
