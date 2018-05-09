#include <iostream>
#include <cmath>
struct complex{
  double x{0.0}, y{0.0};
  void print(void);
  double real(void);
  double imag(void);
  double norm (void);
  double arg(void);
  Complex operator+(const Complex & rhs); //rhs= argumento que esta ala derecha
  Complex operator-(const Complex & rhs); //rhs= argumento que esta ala derecha
  Complex 

};

int main (void)
{
  Complex z1, z2, z3;
  z1.x=4.32;
  z1.y=5.87;
  z2.x=3.0009;
  z2.y=-2.65;
  z1.print();
  std::cout<<z1.real()<<std::endl;
  std::cout<<z1.imag()<<std::endl;
  std::cout<<z1.norm()<<std::endl;
  std::cout<<z1.arg()<<std::endl;
  z3=z1+z2;
  z3.print();
  std::cout
    z4=z1-z2;
  z4.print();
  
  

  return 0;
}
double Complex::print(void) // print pertenece a complex
{
  std::cout << x << std::endl;
  std::cout << y << std::endl;
}
double Complex::real(void)
{
  return x;
}
double Complex::imag(void)
{
  return y;
}

ouble Complex::norm(void)
{
  return std::hypot(x,y);
}
double Complex::arg(void)
{
  return std::atan2(y,x);
}
 Complex operator+(const Complex & rhs)
{
  complex tmp; // tmp un nuevo complejo
  tmp.x=x+rhs.x;
  tmp.y=y+rhs.y;
  return tmp;
}
Complex operator-(const Complex & rhs)
{
  complex tmp; // un nuevo complejo
  tmp.x=x-rhs.x;
  tmp.y=y-rhs.y;
  return tmp;
}
Comple
    
   
