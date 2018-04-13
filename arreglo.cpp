#include <iostream>

const int N=10;
int main (void)

{
  double data(N);
  for (int ii=0; ii<N;++ii){
   data[ii]= 0*ii;//me llena los 10 espacios con ceros
   
  std::cout<<data[ii] <<std::endl;
  }

  //calculo de promedio
  double sum=0.0;
  for(int ii=0; ii<N; ++ii){
    sum+= data[ii];
  }
  std::cout << "Promedio= "<< sum/N <<std::endl;
}
//calculo desviacion estándar
 double desv=0.0;
 for(int ii=0; ii<N; ++ii){
   desv+=((ii)-(sum/N))/(N-1);
 }
   
  

			      
