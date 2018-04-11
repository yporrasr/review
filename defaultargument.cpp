//ejemplo funcion con un argumento pro defecto
#include <iostream>

int addition (int a , int b=0)
{
  int r;
  std::cout <<"the value of b ="<<b<< "\n";
  r=a+b;
  return r;
}

int main (void)
{
  int z,x,y;
  x=5;
  y=3;
  z=addition(x,y);
  std::cout <<"the result is = "<<z<<"\n";
  z=addition (x);
  std::cout<<"the result is = "<<z<<"\n";
  return 0;
}
				  
