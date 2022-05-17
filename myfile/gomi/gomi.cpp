#include <iostream>

double f(const double * const arr) { 
  return arr[1];
}

double g(const double * const &arr) { // 値だけ使いたいなら二度手間
  return arr[1];
}

double h(double * const &arr) { 
  arr[1] = 5.;  
  return arr[1];
}

int main() {
  double x[2];
  x[0] = 2.;
  x[1] = 2.3;

  std::cout << f(x) << std::endl;  // 2.3
  std::cout << g(x) << std::endl;  // 2.3
  std::cout << h(x) << std::endl;  // 5
  std::cout << x[1] << std::endl;  // 5
}
