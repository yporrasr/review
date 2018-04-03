#include <iostream>
#include <cmath>
double forloop(double v, double g);
double whileloop();
int main ()
{
  const double g=9.8;
  double v;

  std::cout <<"ingrese v"<< std::endl;
  std::cin >> v;
  
  
  std::cout<<forloop(v,g) <<std:: endl;
  
 }


double forloop  (double v,double g)
{
  double t=0;
  for (t=0; t<=(2*v)/g; t++){
    double forloop=( v*t)-0.5*g*pow(t,2);
   
  }
}

    
  
