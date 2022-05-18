#include <iostream>

void f(int *ptr) {
  if (ptr == nullptr) return;
  std::cout << "not good" << std::endl;
}

int main() {
  int *x = nullptr;
  f(x);
}
