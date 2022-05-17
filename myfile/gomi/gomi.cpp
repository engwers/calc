#include <iostream>

double f(const double * const arr) { // 値だけ使いたいとき
	return arr[1];
}

double g(const double * const &arr) { // 変更させたくないとき 参照を使う必要はなく，fで十分
	return arr[1];
}

double h(double * const &arr) { // 変更がarrの参照先に反映される
	arr[1] = 5.;  
	return arr[1];
}

int main() {
	double x[2];
	x[0] = 2.;
	x[1] = 2.3;

	std::cout << f(x) << std::endl;
	std::cout << g(x) << std::endl;
	std::cout << h(x) << std::endl;  
	std::cout << x[1] << std::endl;
}
