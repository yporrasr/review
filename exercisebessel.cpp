//PROGRAM THAT PRINTS THE BESSEL FUNCTION OF ORDER ZERO FOR X E [0,10] IN STEPS dx= 0,01. PLOT IT.

#include <iostream>
#include <gsl/gsl_sf_bessel.h>

int main (void)
{
  const double DX = 0.01;
  for(int ii = 0; ii <= 4000; ++ii) {
    double x = 0 + ii*DX;
    std::cout << x << "    " << gsl_sf_bessel_J0(x) << "\n";
  }

  return 0;
}
