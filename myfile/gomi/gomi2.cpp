#include <iostream>

void f(int *ptr) {
  if (ptr == nullptr) return;
  std::cout << "not good" << std::endl;
}

int main() {
  // int *x = nullptr;
  // f(x);

  double *x;
  x = new double[0];  


  if (x == nullptr) std::cout << "nullptr" << std::endl;
  std::cout << x << std::endl;
}
