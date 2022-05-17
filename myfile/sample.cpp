#include "myfile.hpp"

int main() {

	int N = 130;
	double *x;
	x = new double[N];

	for (int i = 0; i < N; ++i) {
		x[i] = 0.01 + i;
	}

	OutMyFile outfile("data/sample.txt");
	outfile.out(N, x);

	const InMyFile y("data/sample.txt");
	std::cout << y(23) << std::endl;

	return 0;

}
