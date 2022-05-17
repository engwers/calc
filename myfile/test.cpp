#include "myfile.hpp"

int main() {

	int N = 130;
	double *x;
	x = new double[N];

	for (int i = 0; i < N; ++i) {
		x[i] = 0.01 + i;
	}

	OutMyFile outfile("data/gomi.txt");
	outfile.out(N, x);

	const InMyFile y("data/gomi.txt");
	std::cout << y(2000) << std::endl;

	return 0;

}
