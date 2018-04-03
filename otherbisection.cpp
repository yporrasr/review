 #include <iostream>
 #include <cmath>
  
  double f(double x);
  
  int main(void)
  {
    std::cout.precision(16);
   std::cout.setf(std::ios::scientific);
 
   const double eps = 1.0e-9;
   int NMAX = 30;
 double xl = 12, xu = 18, xr;
 
   for(int ii = 0; ii <= NMAX; ++ii) {
     xr = 0.5*(xu + xl);
     std::cout << ii << "  " << xl << " " << xu << " " << xr << " " << f(xr) << std::endl;
     if (std::fabs(f(xr)) < eps) break;
     if (f(xr)*f(xl) > 0)
       xl = xr;
     else
       xu = xr;
   }
   std::cout << xr << std::endl;
   
   
   return 0;
 }
 
 double f(double x)
 {
   return (9.81*68.1/x)*(1-std::exp(-10*x/68.1)) - 40;
 }
