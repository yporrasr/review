//problema del paracaidas

#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdlib>
#include <cmath>

const double m = 90; // en kilogramos
const double g = 9.81; // m*s^2
const double cd = 0.225; // kg/m

void rk4(double ta, double tb, double h, std::vector<double> & y);
double f(double t, const std::vector<double> & y, int id);

int main (void)
{
  
  const double TA = 0.0;
  const double TB = 20.4;
  const double H  = 0.001; //dt
  std::vector<double> y = {1000.0, 0}; // {x0, v0} , 1000 (m) es la altura inicial

  rk4(TA, TB, H, y);

  return 0;
}

void rk4(double ta, double tb, double h, std::vector<double> & y)
{
  std::vector<double> k1, k2, k3, k4, aux; // el aux es el vector que no debe cambiar(y_n en la formula) , las k son las constantes que me pide la funcion de RK4
  k1.resize(y.size());
  k2.resize(y.size());
  k3.resize(y.size());
  k4.resize(y.size());
  aux.resize(y.size());

  const int N = (tb-ta)/h;
  for (int nt = 0; nt < N; ++nt) {
    double t = ta + h*nt;
    
    // k1
    for(int ii = 0; ii < y.size(); ++ii) {
      k1[ii] = h*f(t, y, ii);
    }
    // k2 aux ( depende del k1)
    for(int ii = 0; ii < y.size(); ++ii) {
      aux[ii] = y[ii] + k1[ii]/2;
    }
    //k2
    for(int ii = 0; ii < y.size(); ++ii) {
      k2[ii] = h*f(t + h/2, aux, ii); // me recibe el k2 aux
    }
    // k3 aux (depende del k2)
    for(int ii = 0; ii < y.size(); ++ii) {
      aux[ii] = y[ii] + k2[ii]/2;
    }
    //k3
    for(int ii = 0; ii < y.size(); ++ii) {
      k3[ii] = h*f(t + h/2, aux, ii); // me recibe el k3 aux
    }
    // k4 aux ( depende de k3)
    for(int ii = 0; ii < y.size(); ++ii) {
      aux[ii] = y[ii] + k3[ii]; 
    }
    //k4
    for(int ii = 0; ii < y.size(); ++ii) {
      k4[ii] = h*f(t + h, aux, ii);// me recibe el k3 aux
    }
    // nuevo y (y_n+1), con los valores hallados anteriormente
    for(int ii = 0; ii < y.size(); ++ii) {
      y[ii] = y[ii] + (k1[ii] + 2*k2[ii] + 2*k3[ii] + k4[ii])/6.0;
    }if (y[0]< 0.0) break;
    
	   std::cout << t << "\t" << y[0] << "\t" << y[1] << std::endl; // me imprime el tiempo, la posicion (x) y la velocidad 
  }
}


double f(double t, const std::vector<double> & y, int id)
{
  if (0 == id) {
    return y[1]; // y[1] = v
  }
  else if (1 == id) {
    return -g + (cd*std::pow(y[1],2))/m;
  }

  else {
    std::cerr << "ERROR!!!!!!!! Id does not exists -> " << id << std::endl;
    exit(1);
  }
}
