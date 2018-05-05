//aplicacion de ODE al algoritmo de euler para resolver ecuaciones diferenciales

#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdlib>

const double W = 2.98768765; // omega(in rad/s)

void euler(double ta, double tb, double h, std::vector<double> & y);
double f(double t, const std::vector<double> & y, int id);//derivada

int main (void)
{
  const double N  = 2;
  const double TA = 0;
  const double TB = 16.4;
  const double H  = 0.001;//espacio
  std::vector<double> y = {0.12, 0}; // {x0, v0} 

  euler(TA, TB, H, y);

  return 0;
}

void euler(double ta, double tb, double h, std::vector<double> & y)
{
  const int N = (tb-ta)/h;//pasos
  std::vector<double> yaux(y.size());//yaux nunca cambia(VECTOR AUXILIAR)
  for (int nt = 0; nt < N; ++nt) {//pasos en el tiempo
    double t = ta + h*nt;
    std::copy(y.begin(), y.end(), yaux.begin());//algoritmo copy
    for(int id = 0; id < y.size(); ++id) {
      y[id] = y[id] + h*f(t, yaux, id); //formula euler
    }
    std::cout << t << "\t" << y[0] << "\t" << y[1] << std::endl; // me retorna t, x, v
  }
}

double f(double t, const std::vector<double> & y, int id)///derivada
{
  if (0 == id) {
    return y[1]; // y[1] = v
  }
  else if (1 == id) {
    return -W*W*y[0]; // y[0]= x
  }
  else {
    std::cerr << "ERROR!!!!!!!! Id does not exist -> " << id << std::endl;
    exit(1);
  }
} 
 
