//Exercise 4: Floyd Triangle 
#include <iostream>
using namespace std;

int main()
{
    int n, num=1; //n isnumber of lines. num=start with number 1  
    cout<<"Enter number of lines: ";
    cin>>n;

    for(int i=1; i<=n; i++) //i indicates the row number being executed. i++ indicates increment after execution
        {
            for(int j=1; j<=i; ++j) //j indicates count of numbers being written per row. ++j indicates increment pre-execution
            {
                cout<<num<<" ";
                ++num; 
            }
            cout <<endl;
        }
    return 0;
}
