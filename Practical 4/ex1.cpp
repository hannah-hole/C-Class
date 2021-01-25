// Exercise 1: Calculation of the polynomial value for a certain position x (returns a real number)
#include <iostream>
#include<cmath>
using namespace std;

//read polynomial
double * read_poly(int &n){ //*declares pointer that contains memory address.  &n is a parameter passed by reference (size of vector) 
  cout << "Degree: ";
  cin >> n; //user inputs desired polynomial degree 
  double * c=new double[n+1]; //assigns pointer. variable c allocates memory to exact number of terms (dynamic memory allocation)
  for(int i=0;i<=n;i++)
  {
    cout << "coefficient of degree " << i << ": "; //i is the polynomial degree 
    cin >> c[i]; //user to input 
  }
  return c; //returns 
}

//print the polynomial 
void print_poly(double *c, int n){
  int i;
  cout << c[0]; //first term  of the array
  if(n>0)
    cout << " + "; //if there is more than 0 terms, continue 
  for(i=1;i<n;i++)
    cout << c[i] << "*x^" << i << " + "; //shows the power that x is raised to 
  if(n>0)
    cout << c[n] << "*x^" << i; //the last term of the array 
  cout << endl;
}

//recursive function is dynamic
int calc_poly(double*c, int &n) 
{
 int i,sum,x;
 cout<<"Enter the value of x for evaluation: ";
 cin>>x;
 sum=0;
 for(i=0;i<=n;i++)
    sum=sum + c[i]*pow(x,i); //c[i] is the coefficient, i is the power 
 return(sum);
}

int main()
{
  double *p1; //* declare address pointer 
  int g1, val;

  p1=read_poly(g1); //initialises p1 - points to memory address. reads an array 
  print_poly(p1,g1);
  val=calc_poly(p1, g1); //stores value 
  cout<<"The value of the polynomial is: "<<val;
  delete[] p1; //deletes memory allocated to p1 array 
  return 0;
}
