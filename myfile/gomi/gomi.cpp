#include <iostream>

void f(const double * const arr) { 
  std::cout << arr[1] << std::endl;
}

double g(const double * const &arr) { // 値だけ使いたいなら二度手間
  std::cout << arr[1] << std::endl;
}

double h(double * const &arr) { 
  std::cout << arr[1] << std::endl;
  arr[1] = 5.;  
}

int main() {
  double x[2];
  x[0] = 2.;
  x[1] = 2.3;

  std::cout << f(x) << std::endl;  // 2.3
  std::cout << g(x) << std::endl;  // 2.3
  std::cout << h(x) << std::endl;  // 5
  std::cout << x[1] << std::endl;  // 5

  return;
}
