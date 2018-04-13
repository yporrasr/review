//arreglo de una matriz

#include <iostream>

const int M=3;//tamaños
const int N=5;

int main (void)
{
  double A[M*N]={0.0};// A=matriz original M= filas N=columnas//inicializan en 0.0 
  double AT[N*M]={0.0};//transpuesta (doble corchete por ser arreglo bidimensional

  //para llenar la matriz
  for(int ii=0; ii < M; ++ii){
    for(int jj=0;jj < N; ++jj){ //for dentro de otro for por ser arreglo bidimesional 
      A[ii*N+jj]=ii*N  + jj;
    }
  }
  //matriz transpuesta
  for(int ii=0; ii<M;++ii){
    for(int jj=0;jj<N;++jj){
      AT[jj*M+ii]=A[ii*N+jj];
    }
  }

  //para imprimir la matriz original
  std::cout<< "matriz original : \n";
  for (int ii=0; ii<M;++ii){
    for(int jj=0; jj<N; ++jj){
      std::cout <<A[ii*N+jj]<<"  ";
    }
    std::cout<<"\n";
      }

  //para imprimir la transpuesta
  std::cout<<"matriz transpuesta =\n";
  for (int ii=0; ii<N; ++ii){
    for(int jj=0; jj<M;++jj){
      std::cout<<AT[ii*M+jj]<<" ";
    }
    std::cout<<"\n";
  }
  return 0;
}
