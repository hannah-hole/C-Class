//Exercise 7 using alternative recursive definition
#include <iostream>
using namespace std;
int calls=0; //define global variable to count number of calls 
 
int power(int a, int n)
{   calls++;
    if (n == 0)
        return 1;
    if (n%2==0)     //if n is even
        return power(a, n / 2) * power(a, n / 2);
    else // if n is odd
        return a * power(a, n / 2) * power(a, n / 2);   
}
 
int main()
{   int a, n;
    cout<<"Enter base number, a: ";
    cin>>a; 
    cout<<"Enter power number(positive integer): ";
    cin>> n;
    printf("%d^%d = %d\n", a, n, power(a, n)); //alternatlive way to output string
    cout<<"Number of calls is: "<<calls; 
 
    return 0;
}

/*the number of calls is below (starting from 0 power). We can see that groups of powers have the same number of calls;
these groups are double the size of the previous group; 
i.e 1st power has 3 calls, next 2 powers have 7 calls, next 4 powers have 15 calls, next 8 powers have 31 calls etc.  
We can also see that the number of calls is 2*(previous group number of calls)+1, i.e 3=2*1+1, 7=2*3+1, 15=2*7+1 etc 
3
7
7
15
15
15
15
31
31
31
31
31
31
31
31
63

*/




