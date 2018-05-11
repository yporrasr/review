// This programs models a two dimensional vector
#include <iostream>

class Vector2D {
public:
  double x{0.0}, y{0.0};
private:
}; // this semicolon is important

int main(void)
{
  Vector2D a;
  std::cout << "Size of a double = " << sizeof(double) << std::endl;
  std::cout << "Size of Vector2D = " << sizeof(Vector2D) << std::endl;

  std::cout << "a_x = " << a.x << std::endl;
  std::cout << "a_y = " << a.y << std::endl;

  a.x = 2.0; a.y = -5.7;
  std::cout << "a_x = " << a.x << std::endl;
  std::cout << "a_y = " << a.y << std::endl;

      
  return 0;
}
