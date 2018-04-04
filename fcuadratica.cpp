//funcion que me calcula las raices de f(x)=-0.5x^2+2.5x+4.5 por medio de la formula cuadratica

#include <iostream>
#include <cmath>

double cuadratica (double a, double b, double c);

int main ()
{
  std::cout<<cuadratica(-0.5,2.5,4.5);

  return 0;
  
}
double cuadratica (double a, double b,double c)
{
  double x1, x2;
  x1= (-b + sqrt(pow(b,2)-4*a*c) )/(2*a);
  x2= (-b - sqrt(pow(b,2)-4*a*c) )/(2*a);
  std::cout<<"raices:"<<x1<<"\t"<<x2<<std::endl;
  
  return 0;
}
    
