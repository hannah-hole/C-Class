//Exercise 7: recursive C++ function that given an integer a and a non-negfative integer n computes the n-th power of a based on the following recursive definition
//note the equation
#include <iostream>
using namespace std;
int calls=0; //define global variable 

int calc_power(int a, int n) //define function to calculate power 
{   calls ++;
    if(n==0)
        return 1;
    else
    {
        return(a*calc_power(a, n-1));
    }
}

int main()
{
    int a, n, result;

    cout << "Enter base number, a: ";
    cin >> a;

    cout << "Enter power number(positive integer): ";
    cin >> n;

    result = calc_power(a, n);
    cout << a << "^" << n << " is " << result<<endl;
    cout<<"Number of calls is: "<<calls<<endl; 
    cout<<"The number of recursive calls is 1 more than the power, n";
    return 0;
}
