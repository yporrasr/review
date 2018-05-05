//segundo ejemplo:0multiplicacion matriz por vector

#include <iostream>
#include <eigen3/Eigen/Dense>

int main()
{
  Eigen::MatrixXd m = Eigen::MatrixXd::Random(3,3);//matriz aleatoria 3x3
  m = (m + Eigen::MatrixXd::Constant(3,3,1.2)) * 50;//estamos agregando una matriz(constante)de 3x3 con 1,2 
  std::cout << "m =" << std::endl << m << std::endl;
  Eigen::VectorXd v(3);//vector
  v << 1, 2, 3;
  std::cout << "m * v =" << std::endl << m * v << std::endl;//me devuelve matriz*vector que da un vector  
}

//me compilo normal ( g++ nombrearchivo.cpp)
