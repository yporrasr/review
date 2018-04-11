#include <iostream>

int main (void)
{
  auto flambda =[] (auto a, auto b) {return a <b;};
  bool flag = flambda (3, 3.14); //con bool me retorna 1 si es verdadero, 0 si es falso
  std::cout <<flag<<std::endl;
  return 0;
}
