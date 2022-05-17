#include <iostream>
#include <filesystem>

#ifndef MYFILE_HPP
#define MYFILE_HPP

class OutMyFile {
	
	public:
		OutMyFile(const int n, const std::filesystem::path &path);

	public:
		void out(const double * const val) const;
		void out(const int *index, const double *val) const;
		void out(const double * const xval, const double * const yval) const;
	 
	private:
		const std::filesystem::path file_path;
		const int N;
};

class InMyFile {

	public:
		InMyFile(const std::filesystem::path &path);
		~InMyFile();

	public:
		inline bool check_index(const int idx) const;
		int getNum() const;
		double operator() (const int m) const;

	private:
		const std::filesystem::path file_path;
		const int N;
		double *arr;

};

#endif 
