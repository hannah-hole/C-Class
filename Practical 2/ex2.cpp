//Exercice 2 : Position of a moving body

#include<iostream>
#include<cmath>
using namespace std; 

//define function position
double position(int position_0, int speed_0, int a, int n_display, int n_update, double t)
{
    return (position_0 + speed_0*t + 0.5*a*pow(t, 2)); //formula for position
} 

int main(){
    double position_0, speed_0, a, n_display, n_update, t=0, pos;
    cout<<"enter the initial position, the speed and the acceleration: "; //user input
    cin>>position_0>>speed_0>>a;
    cout <<"how many times you want to display the position of the moving body? ";
    cin>> n_display;
    cout <<"how often (in seconds) you want to update the position of the moving object? ";
    cin>> n_update;
    cout << "Acceleration: "<<a <<" Initial speed: " <<speed_0<< " Initial position: "<<position_0<< " Number of times "<<n_display<<" Delta t: "<<n_update <<endl; 
    while(n_display>0)
        {  
            pos=position(position_0, speed_0, a, n_display, n_update, t); 
            cout<< "At time " << t << " the position is " <<pos<< endl; //call function 
            n_display-=1; //increment the number of times to display 
            t+=n_update; //update time by the increment given 
        }
return 0;
}
