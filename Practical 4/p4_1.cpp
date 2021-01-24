// Calculation of the polynomial value for a certain position x (returns a real number)
//HH: check if val needs to be dynamic. ctrl+alt+ arrows for column deletion
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
  double *p1; //* declare pointer 
  int g1, val;

  p1=read_poly(g1); //initialises p1 - points to memory address. reads an array 
  print_poly(p1,g1);
  val=calc_poly(p1, g1);
  cout<<"The value of the polynomial is: "<<val;
  delete[] p1; //deletes memory allocated to p1 array 
  return 0;
}


// #include<iostream>
// #include<math.h>
// using namespace std;

// /* declare structure for polynomial */
// struct poly
// {
//  int coeff;
//  int expo;
// };

// /* function prototypes */
// int readPoly(struct poly []);
// void displayPoly( struct poly [],int terms);
// int eval(int n1,struct poly []);

// int main()
// {
//  int n1;
//  int value;
//  struct poly p1[20];


//  cout<<"\n Enter the polynomial details:";
//  n1=readPoly(p1);
//  cout<<"\n  The polynomial is: ";
//  displayPoly(p1,n1);
//  value=eval(n1,p1);
//  cout<<"\n The Resultant value of the polynomial is:"<<value<<endl;

//  return 0;
// }
// int readPoly(struct poly p[])
// {
// int t1,i;

// cout<<"\n Enter the total number of terms in the polynomial: ";
// cin>>t1;
// cout<<"\n Enter the COEFFICIENT and EXPONENT "<<endl;
// for(i=0;i<t1;i++)
// {
// 	cout<<"  Enter the Coefficient("<<i+1<<"):";
// 	cin>>p[i].coeff;
// 	cout<<"     Enter the Exponent("<<i+1<<"):";
// 	cin>>p[i].expo;
// }
// return(t1);
// }

// void displayPoly(struct poly p[10],int term)
// {
//  int k;

//  for(k=0;k<term-1;k++)
// 	cout<<p[k].coeff<<"(x^"<<p[k].expo<<")+";
//  cout<<p[k].coeff<<"(x^"<<p[k].expo<<")";
// }

// int eval(int n1,struct poly p1[])
// {
//  int i,sum,x;
//  cout<<"\n\n Enter the value of x for evaluation: ";
//  cin>>x;
//  sum=0;
//  for(i=0;i<n1;i++)
//  sum=sum + p1[i].coeff*pow(x,p1[i].expo);
//  return(sum);
// }

