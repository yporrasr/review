#include <iostream>
typedef double REAL;//donde ponga REAL se refiere a un float(solo es cambiar aca el tipo de dato
int main (void)
{
  REAL under = 1.0, over=1.0;
  int N=1076, ii=0.0;
  while (ii< N){
    std::cout << ii << "\t" <<under << "\t"<< over << std:: endl;
    under /= 2.0;
    over *= 2.0;
    ++ii;
  }
  return 0;
}
  
// para enteros no multiplico o o divido sino sumo o resto 
