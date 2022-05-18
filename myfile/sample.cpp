#include <iostream>
#include <cmath>
#include "myfile.hpp"

int main() {

  int N = 130;
  double *x;
  x = new double[N];

  for (int i = 0; i < N; ++i) {
    x[i] =  M_PI * i;
  }

  OutMyFile outfile(N, "data/sample.txt");
  outfile.out(x);

  const InMyFile y("data/smple.txt");
  std::cout << y(23) << std::endl;

  return 0;

}
