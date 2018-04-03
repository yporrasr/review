#include <iostream>

int addition (const int &a, int b)
{
  std::cout << &a << std::endl;
  int r;
  r = a + b;
  // a = 10
  return r;
}
int main (void)
{
  int c, a, b;
  std::cout<< &a << std::endl;
  a = 5;
  b = 3;
  c = addition (a, b);
  
 std:: cout << "the result is " <<c<< std::endl;
  return 0;
}
