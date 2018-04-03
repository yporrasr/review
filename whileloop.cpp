//suma de los numeros del 1-100 con diferentes loops
#include <iostream>
double sumwhile( int N);
double sumfor(int N);
double sumdowhile (int N);

int  main (void)
{
  std::cout<<sumwhile(100)<< std::endl;
  std::cout<<sumfor(100)<<std::endl;
  std::cout<<sumdowhile(100)<<std::endl;

  return 0;
}
double sumwhile (int N)
{
  int n=1, sum=0;
  while (n<=N){
    sum+=n;
    n++;
  }
  return sum;
}
double sumfor(int N)
{
  int n=0, sum=0;
    for( n=1; n<=N; n++){
      sum+=n;
    }
  return sum;
}
double sumdowhile (int N)
{
  int n=1, sum=0;
  do{
    sum+=n;
    n++;
  }
  while(n<=N);//se evalua la condicion al final

  return sum;
}

			
  

    
