#include <iostream>
#include <cstdio> 
#include <cmath>

double f(double x);
double fderivcentral(double x, double h);
double fderivrichardsoncentral(double x, double h);
double error (double x,double h);
double fsegderivcentral (double x,double h);

int main (void)
{
  double x= M_PI;
  double h= 0.1;
 
 std::printf("%25.16e\n", std::cos(x));
 std::printf("%25.16e\n",fderivcentral(x,h));
 std::printf("%25.16e\n", std::sin(x));
 std::printf("%25.16e\n",fsegderivcentral(x,h));
 
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
double fsegderivcentral (double x, double h)
{
  double result = ( f(x+h)-f(x))-(f(x)-f(x-h))/pow(h,2);
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
  return std::log(std::abs(1-fderivrichardsoncentral(x,h)/cos(x)));
    }
  
  
