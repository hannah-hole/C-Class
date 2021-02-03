//ex 3: define a data-type for representing point in the Cartesian place
//called Point
//must have x and y co ordinate
//allow to compute distance of chosen point to another point 
//use encapsulation
//default init of point (0,0)
//put into another file
//https://www.includehelp.com/cpp-programs/point-class-having-x-and-y-axis-with-getter-and-setter-functionsin-cpp.aspx
//http://www.cplusplus.com/forum/beginner/203708/
//https://www.w3schools.com/cpp/cpp_encapsulation.asp

using namespace std;
#include <iostream>
#include<cmath>

class Point {
    private:
        int x,y; 
    public:
        Point() {x=0; y=0;}; //default constructor of x, y to zero

        void setPoint(int a, int b) //setter function 
        {   x=a;
            y=b;
        }
        int getx(void)//getter function
            { 
                return x;
            }
        int gety(void) //getter function
            {
                return y;
            }
        double distance(const Point somePoint){ //distance function. Point indicates the class
            double distx=somePoint.x-x; //distance between x co-ordinates
            double disty=somePoint.y-y; //distance between y co-ordinates
            return sqrt(distx*distx+disty*disty); //distance between points using pythagoras' theorem
        }
}; 

int main()
{
    int g, h, i, j; 
    Point p1, p2;
    cout<<"Enter x, y co-ordinate of first point: ";
    cin>>g>>h;
    cout<<"Enter x, y co-ordinate of second point : ";
    cin>>i>>j;
    p1.setPoint(g,h); //set points using input 
    p2.setPoint(i,j);
    cout<<"first point: "<<p1.getx()<<","<<p1.gety()<<endl; 
    cout<<"second point: "<<p2.getx()<<","<<p2.gety()<<endl; 
    cout<<"distance between points is: "<<p1.distance(p2);
    return 0;
}

