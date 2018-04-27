#include <iostream>
#include <algorithm>
#include <vector>
#include <cstdlib>

const double W = 2.98768765; // omega , in rad/s

double f (double t, const std::vector<double> & y, int id);
void euler (double ta, double tb, double h, std::vector<double> & y);

int main (void)
{
  const double N = 2.0;
  const double TA = 0.0;
  const double TB = 16.4;
  const double H = 0.01;
  std::vector<double> y={0.12,0}; //{x0, v0}

  euler (TA, TB, H, y);
    
    return 0;
}

void euler (double ta, double tb, double h, std::vector<double> & y)
{
  const int N = (tb-ta)/h;
  std::vector<double>yaux(y.size()); //yaux nunca cambia (VECTOR AUXILIAR)
  for (int nt=0; nt <N; ++nt){ //numero de pasos del tiempo
    double t=ta + h*nt;
    std::copy(y.begin(), y.end(), yaux.begin());//algoritmo copy
    for (int id=0; id< y.size();++id){
      y[id]= y[id] + h*f(t, yaux, id);//euler
    }
    std::cout<< t << "\t"<< y[0] << "\t" << y[1] << std::endl;
  }
}
double f (double t, const std::vector<double> & y, int id)
{
  if (0==id){
    return y[1];
  }
  else if (1==id){
    return -W*W*y[0];
  }
  else {
    std::cerr << "ERROR!!!! Id does noy exist ->"<< id<< std::endl;
    exit(1);
  }
}
		     
    
  
  

