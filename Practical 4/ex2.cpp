//Exercise 2: Sum of two polynomials, returning a polynomial 

#include <iostream>
#include<cmath>
using namespace std;


double * read_poly(int &n)
{
  cout << "Degree: ";
  cin >> n; //user inputs highest polynomial degree 
  double * c=new double[n+1]; //assigns pointer. variable c is allocates memory to exact number of terms (dynamica memory allocation)
  for(int i=0;i<=n;i++){
    cout << "coefficient of degree " << i << ": "; //i is the polynomial degree 
    cin >> c[i]; //user to input 
  }
  return c; //returns 
}

void print_poly(double *c, int n){
  int i;
  cout << c[0]; //first term 
  if(n>0)
    cout << " + "; //if there is more than 0 terms, continue 
  for(i=1;i<n;i++)
    cout << c[i] << "*x^" << i << " + "; //shows the power that x is raised to 
  if(n>0)
    cout << c[n] << "*x^" << i; //the last term 
  cout << endl;
}

//function to add polynomials 
double * poli_sum (double * p1, int d1, double * p2, int d2, int & dr)//*p1, *p2 are pointers to polynomials (vector), d1 d2 are degrees of the polynomials, &dr is argument passed by reference in order to return the degree of the result
{   int i;
    dr=max(d1,d2); //find the maximum degree 
    double *sum=new double[dr]; //new allocates memory location of size dr
    for(i=0; i<=d1; i++)
        sum[i]=p1[i]; //sum up the coefficients of first polynomial and input into a vector array, sum
    for(i=0; i<=d2; i++)
        sum[i]+=p2[i]; //add the coefficient of the second polynomial to the vector array sum 
    return sum;
}

int main()
{
  double *q1, *q2, *val ; //* declare pointers to memory addresses  
  int g1, g2, dx;
  cout<<"Enter information for first polynomial\n";   
  q1=read_poly(g1); //let q1 point to the dynamically allocated memory
  cout<<"The first polynomial is: ";
  print_poly(q1,g1);
  cout<<"Enter information for second polynomial\n"; 
  q2=read_poly(g2);
  cout<<"The second polynomial is: ";
  print_poly(q2,g2);
 
  val=poli_sum(q1,g1, q2, g2, dx);;
  cout<<"The sum of the polynomials is: ";
  print_poly(val, dx); 

  delete[] q1, q2, val; //deletes memory allocated to p1 array 
  return 0;
}

