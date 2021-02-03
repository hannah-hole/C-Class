//ex4: define a data-type for representing geometric circles 
//called Circle
//must be defined by radius and centre 
//computer circumference, area, whether point is inside circle 
//use encapsulation 
//put into a reusable file
//use test code to run file 

using namespace std;
#include <iostream>
// #define _USE_MATH_DEFINES // for C++
// #include <cmath>
#define _USE_MATH_DEFINES // for C. This workson visual studio instead of cmath 
#include <math.h>
class Circle{
    private: 
        int radius, x, y; 
    public:
        Point() {x=0; y=0;}; //default constructor of x, y to zero
    void setPoint(int a, int b)
    {
        x=a;
        y=b;
    } 
    void setRadius(int r)
    {radius=r;}
    int getx(void)
    {
        return x;
    }
    int gety(void)
    {
        return y; 
    }
    int getr(void)
    {
        return radius;
    }
    double area_circle()
    {//member function
        return M_PI*pow(radius,2); 
    }
    double circumference()
    {
        return M_PI*2*radius; 
    }
    bool in_circle(const Circle somePoint) 
{    
    if(pow((somePoint.x - x),2) +  pow((somePoint.y - y),2)  <= pow(radius,2))  // Compare radius of circle with distance of its center from given point using Pythagoras' Theorem 
        return true; 
    else
        return false; 
} 
}; 

int main(){
    int rad,s,t, u, v; 
    Circle p1, p2;
    cout<<"Enter centre x & y co-ordinates: ";
    cin>>s>>t; 
    cout<<"Enter radius: ";
    cin>>rad;
    cout<<"Enter point: ";
    cin>>u>>v; 
    p1.setPoint(s, t);
    p1.setRadius(rad);
    p2.setPoint(u,v);
    cout<<"First point is: "<<p1.getx()<<", "<<p1.gety()<<endl; 
    cout<<"area: "<<p1.area_circle()<<endl; 
    cout<<"circumerference: "<<p1.circumference()<<endl;
    cout<<"Point in circle? "<<p1.in_circle(p2);
    return 0;
}