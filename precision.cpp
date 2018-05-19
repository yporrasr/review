#include <iostream>
typedef int  REAL;
int main (void)
{
  REAL under = 1.0, over = 1.0;//ambos comienzan en 1
  int N = 10, ii = 0;//un total de 10 numeros 
  while (ii < N) {
    std::cout <<ii << "\t" << under << "\t" << over << std::endl;
    under += 2.0;
    over -= 2.0;
    ++ii;
  }
  return 0;
}

//asi me retorna la suma (cada 2.0) , la resta (cada 2.0)
