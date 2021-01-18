//Exercise 1: Point in a circle

#include<iostream>
#include<cmath>
using namespace std;

//create function that returns a boolean value 
bool in_circle(int centre_x, int centre_y, int radius, int x, int y) 
{    
    if ((x - centre_x) * (x - centre_x) +  (y - centre_y) * (y - centre_y) <= radius * radius)  // Compare radius of circle with distance of its center from given point using Pythagoras' Theorem 
        return true; 
    else
        return false; 
} 

int main(){
    int radius, x, y, centre_x, centre_y;
    cout<<"Choose x & y co-ordinates: "; //user to input information
    cin>>x>>y; 
    cout<<"Choose radius: ";
    cin>>radius;
    cout <<"Choose the circle centre x & y co-ordinates: ";
    cin>> centre_x>> centre_y;
    in_circle(centre_x, centre_y, radius, x, y) ?  //call function 
    cout << "Inside" : cout << "Outside"; 
    return 0;
}



