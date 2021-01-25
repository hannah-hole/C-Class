//Exercise 3: Product of two polynomials(returns polynomial)

#include <iostream>
#include<cmath>
using namespace std;


double * read_poly(int &n){
  cout << "Degree: ";
  cin >> n; //user inputs highest polynomial degree 
  double * c=new double[n+1]; //assigns pointer. variable c is allocates memory to exact number of terms (dynamica memory allocation)
  for(int i=0;i<=n;i++){
    cout << "coefficient of degree " << i << ": "; //i is the polynomial degree 
    cin >> c[i]; //user to input 
  }
  return c; //returns 
}

void print_poly(double *c, int n){ //n is number of term 
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

//function to multiply polynomials 
double * poli_prod (double * p1, int d1, double * p2, int d2)//p1, p2 are polynomials, d1 d2 are degrees of the polynomial.
{   int i;
    double *prod=new double[d1+d2]; //Initialize product polynomial. create dynamic product array size d1+d2
    for(i=0; i<=d1+d2; i++)
        prod[i]=0; //initialize the array to 0
    for(i=0; i<=d1; i++) //while the array position is less than or equal to the number of degrees of the first polynomial, execute the following
        {
            for(int j=0; j<=d2; j++) //we take one coefficient at a time from the first polynomial and multiply it with each coefficient from the second polynomial. then repeat
            prod[i+j]+=p1[i]*p2[j]; //it puts into an array and when we do another iteration, it adds the coefficients 
        }
    return prod;
}

int main()
{
  double *q1, *q2, *val ; //* declare pointer 
  int g1, g2;
  cout<<"Enter information for first polynomial\n";   
  q1=read_poly(g1); //initialises p1 - points to memory address. reads an array 
  cout<<"The first polynomial is: ";
  print_poly(q1,g1);
  cout<<"Enter information for second polynomial\n"; 
  q2=read_poly(g2);
  cout<<"The second polynomial is: ";
  print_poly(q2,g2);
  val=poli_prod(q1, g1, q2, g2);
  cout<<"The product of the polynomials is: ";
  print_poly(val, g1+g2); 

  delete[] q1, q2, val; //deletes memory allocated
  return 0;
}

