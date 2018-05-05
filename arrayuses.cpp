#include <algorithm>
#include <iostream>
#include <numeric>
#include <vector>
#include <random>
#include <cstdlib>

void print(const std::vector<double> & v);

int main()
{
  const int N = 10;
  std::vector<double> v(N);

  // fill the array with 0
  std::fill(v.begin(), v.end(), 0.0);// usando FILL
  std::cout << "Filled with 0\n";
  print(v);

  // generate: fill the array with random numbers 
  std::srand(0); // seed
  std::generate(v.begin(), v.end(), std::rand); // Using the C function std::rand()
  std::cout << "Filled with random numbers\n";
  print(v);

  // iota -> a sequence
  std::iota(v.begin(), v.end(), -5);
  std::cout << "Filled with iota\n";
  print(v);

  // all of, any of
  if (std::all_of(v.cbegin(), v.cend(), [](int i){ return i > -6; })) {
    std::cout << "All numbers are larger than -6\n";
  }
  if (std::any_of(v.cbegin(), v.cend(), [](int i){ return i > 1; })) {
    std::cout << "Some numbers are larger than 1\n";
  }

  // find
  auto result1 = std::find(std::begin(v), std::end(v), 2);
  std::cout << "v does ";
  if (result1 == std::end(v))
    std::cout << " not ";
  std::cout << "contain the value : " << 2 << std::endl;

  // for_each : substract 2 to each number(aplica esto a cada numero)
  std::for_each(v.begin(), v.end(), [](double &n){ n -= 2; });
  std::cout << "Substracted 2 \n";
  print(v);

  // Reduction
  std::cout << "Sum of all elements \n";
  std::cout << std::accumulate(v.begin(), v.end(), 0) << std::endl;
  print(v);

  // shuffle
  std::random_device rd;
  std::mt19937 g(rd());
  std::shuffle(v.begin(), v.end(), g);
  std::cout << "Shuffled vector \n";
  print(v);//vector v pero en diferente orden 

  // sort, can use lambdas
  std::sort(v.begin(), v.end());
  std::cout << "Sorted vector \n";
  print(v);//vector ordenado
  
}

void print(const std::vector<double> & v)
{
  std::cout << "v: ";
  for (const auto & iv: v) { // range based loop, c++11
    std::cout << iv << " ";
  }
  std::cout << "\n";
}
