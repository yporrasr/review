#include <iostream>
#include <cmath>

using fptr = double(double)
double bisection (double xl, double xu, double eps, int NMAX, fptr func)

  int main()
{
  std::cout.precision(16);//para precision
  std::cout.setf(std::ios::scientific);

  const double eps= 1.0e-9;
  int NMAX= 30;
  double xl=-10; xu=20;
  //f=((9.81*69.1/x)*(1-exp(-10*x/68.1)) -40;
  
   for (ii=0; ii<=NMAX; ++ii){

    xr=(xl + xu)/ 2;

    if (std::fabs(f(xr))<eps)break;
    if(f(xr)*f(xl)>0)
      xl=xr;
    else
      xu=xr;
   }
   std::cout<<xr<<std::endl;

   return 0;
}
  
    
  
