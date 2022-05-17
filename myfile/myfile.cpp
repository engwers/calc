#include <iostream>
#include <fstream>
#include <filesystem>
#include <string>
#include "myfile.hpp"

OutMyFile::OutMyFile(const std::filesystem::path &path) : file_path(path) {
	return;
}

void OutMyFile::out(const int n, const double * const val) const {

	std::ofstream outfile(file_path);

	for (int i = 0; i < n; ++i) {
		outfile << val[i] << std::endl;
	}

	return;
}

void OutMyFile::out(const int n, const double * const xval, const double * const yval) const {

	std::ofstream outfile(file_path);

	for (int i = 0; i < n; ++i) {
		outfile << xval[i] << " " << std::endl;
	}

	return;
}

InMyFile::InMyFile(const std::filesystem::path &path) :file_path(path), n(getNum()) {

	std::ifstream infile(file_path);
	 
	if (!infile) {
		std::cout << "cannot open" << std::endl;
		return;
	}

	arr = new double[n];
	for (int i = 0; i < n; ++i) {
		infile >> arr[i];
	}
	infile.close();

	return;
}

InMyFile::~InMyFile() {
	delete[] arr;
}

int InMyFile::getNum() const{

	std::ifstream infile(file_path);

	int count = 0;
	std::string line; 

	while (std::getline(infile, line)) ++count;

	infile.close();

	return count;
}

double InMyFile::operator() (const int m) const {
	if ((m < 0) || (n <= m)) {std::cout << "index out of range" << std::endl;}
	return arr[m];
}
