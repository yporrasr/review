//EJEMPLO CON FUNCION DE BESSEL

#include <cstdio>  // para printf
#include <gsl/gsl_sf_bessel.h>

int main (void)
{
  double x = 5.0;
  double expected = -0.17759677131433830434739701;

  double y = gsl_sf_bessel_J0 (x); //funcion de bessel

  printf ("J0(5.0) = %.18f\n", y);
  printf ("exact   = %.18f\n", expected);
  return 0;
}

//compilar con -lgsl -lgslcblas
      
