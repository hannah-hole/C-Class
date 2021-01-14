//ex4: Floyd Triangle 
#include <iostream>
using namespace std;

int main()
{
    int n, num=1; //start with number 1 
    cout<<"Number of lines";
    cin>>n;

    for(int i=1; i<=n; i++) //i indicates the row number. i++ indicates increment after execution
        {
            for(int j=1; j<=i; ++j) //j indicates number. ++j indicates increment pre-execution
            {
                cout<<num<<" ";
                ++num; 
            }
            cout <<endl;
        }
    return 0;
}