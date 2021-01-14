//Ex 3: Swap numbers (by reference)
#include<iostream>
using namespace std;

//Define function 
int swap(int *x, int *y)
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
    swap(&x, &y);
    cout<<"x: "<<x<<" y: "<< y ;
    return 0;
}

/*#include<iostream>
using namespace std;

void cyclicSwap(int *a, int *b, int *c);

int main()
{
    int a, b, c;

    cout << "Enter value of a, b and c respectively: ";
    cin >> a >> b >> c;

    cout << "Value before swapping: " << endl;
    cout << "a, b and c respectively are: " << a << ", " << b << ", " << c << endl;

    cyclicSwap(&a, &b, &c);

    cout << "Value after swapping numbers in cycle: " << endl;
    cout << "a, b and c respectively are: " << a << ", " << b << ", " << c << endl;

    return 0;
}

void cyclicSwap(int *a, int *b, int *c)
{
    int temp;
    temp = *b;
    *b = *a;
    *a = *c;
    *c = temp;
}
*/

