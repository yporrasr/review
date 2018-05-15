#include<iostream>
#include<cmath>
struct complex{
  double x{0.0}, y {0.0};
  void print (void);
  double real(void);
  double imag(void);
  double norm(void);
  double arg(void);
  complex operator+(const complex & rhs);
  complex operator-(const complex & rhs)    ;
  complex sin(void);
};
int main(void)
{
  complex z1, z2, z3, z4, z5;
  z1.x=4.32;
  z1.y=5.87;
  z2.x=3.00009;
  z2.y=-2.69;
  z1.print();
  std::cout<<z1.real()<<std::endl;
  std::cout<<z1.imag()<<std::endl;
  std::cout<<z1.norm()<<std::endl;
  std::cout<<z1.arg()<<std::endl;
  z3=z1+z2;
  z3.print();
  z4=z1-z2;
  z4.print();
  z5=z1.sin();
  z5.print();
  
  //std::cout<< z1<<std::endl; // esto es un error

  return 0;
}
void complex::print (void)
{
  std::cout<< x<<std::endl;
  std::cout<< y<<std::endl;
}
double complex::real (void)
{
  return x;
}
double complex::imag(void)
{
  return y;
}
double complex::norm(void)
{
  return std::hypot(x,y);
}
double complex::arg(void)
{
  return std::atan2(y,x);
}
complex complex::operator+(const complex & rhs)
{
  complex imp;
  imp.x=x+rhs.x;
  imp.y=y+rhs.y;
  return imp;
}
complex complex::operator-(const complex & rhs)
{
  complex imp;
  imp.x=x-rhs.x;
  imp.y=y-rhs.y;
  return imp;
}
complex complex::sin(void)
{
  complex imp;
  imp.x=std::sin(x)*std::cosh(y);
  imp.y =std::cos(x)*std::sinh(y);
  return imp;
}
