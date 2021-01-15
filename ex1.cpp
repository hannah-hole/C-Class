//Point in a circle
#include<iostream>
#include<cmath>
using namespace std;

bool in_circle(int centre_x, int centre_y, 
                   int radius, int x, int y) 
{    // Compare radius of circle with distance  
    // of its center from given point 
    if ((x - centre_x) * (x - centre_x) + 
        (y - centre_y) * (y - centre_y) <= radius * radius) 
        return true; 
    else
        return false; 
} 

int main(){
    int radius, x, y, centre_x, centre_y;
    cout<<"x co-ordinate: ";
    cin>>x;
    cout<<"y co-ordinate: ";
    cin>>y;    
    cout<<"radius: ";
    cin>>radius;
    cout <<"Circle centre x co-ordinate: ";
    cin>> centre_x;
    cout <<"Circle centre y co-ordinate: ";
    cin>> centre_y;
    in_circle(centre_x, centre_y, radius, x, y) ?  
    cout << "Inside" : cout << "Outside"; 
    return 0;
}

// int main(){
//     int radius, x, y, centre_x, centre_y;
//     cout<<"x co-ordinate, y co-ordinate: ";
//     cin>>x >>y;   
//     cout<<"Circle centre x co-ordinate, Circle centre y co-ordinate, radius: ";
//     cin>>centre_x>>centre_y>>radius;
//     in_circle(centre_x, centre_y, radius, x, y)?
//     cout << "Inside" : cout << "Outside"; 
// return 0
// }




