// This programs models a two dimensional vector

#include <iostream>
#include <cmath>

struct Vector2D {
  // variables
  double x{0.0}, y{0.0};
  // functions
  double norm(void);
  double angle(void);
}; // this semicolon is important

double Vector2D::norm(void) //norm pertenece a vector2D
{
  return std::sqrt(x*x + y*y);
}

double Vector2D::angle(void)//angle pertenece a vector2D
{
  return std::atan2(y, x);
}


int main(void)
{
  Vector2D a;
  a.x = 2.0; a.y = -5.7;
  std::cout << "a_x = " << a.x << std::endl;
  std::cout << "a_y = " << a.y << std::endl;

  std::cout << "|a| = " << a.norm() << std::endl;
  std::cout << "angle(a) = " << a.angle() << std::endl;
        
  return 0;
}
