#include <iostream>

void f(const double * const arr) { 
  std::cout << arr[1] << std::endl;
}

void g(const double * const &arr) { // 値だけ使いたいなら二度手間
  std::cout << arr[1] << std::endl;
}

void h(double * const &arr) { 
  std::cout << arr[1] << std::endl;
  arr[1] = 5.;  
}

int main() {
  double x[2];
  x[0] = 2.;
  x[1] = 2.3;

  f(x);  // 2.3
  g(x);  // 2.3
  h(x);  // 5
  std::cout << x[1] << std::endl;

  return 0;
}
