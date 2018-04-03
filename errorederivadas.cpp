#include <iostream>
#include <cstdio> 
#include <cmath>

double f(double x);
double fderivcentral(double x, double h);
double fderivrichardsoncentral(double x, double h);
double error (double x,double h);

int main (void)
{
  double x= M_PI/4;
  double h= 0.1;
  for (h=0.1; h>= 1e-10; h=h/10)
    {
         
  std:: printf("%25.16e\t%25.16e\n", h, error (x,h));
 
    }

  return 0;
}

double f(double x)
{
  double result = std:: sin (x);
  return result;
}

double fderivcentral (double x, double h)
{
  double result = (f (x+h/2) - f(x-h/2))/h;
return result;
}


 double fderivrichardsoncentral (double x, double h)
 {
   double h2= h/2;
  double result1= fderivcentral(x,h);
  double result2= fderivcentral(x, h2);
  double result = (4*result2-result1)/3.0;
  return result;
 }
double error (double x,double h)
{
  return std::abs(1-fderivrichardsoncentral(x,h)/cos(x));
    }
  
  
