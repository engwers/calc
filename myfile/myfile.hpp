#include <iostream>
#include <filesystem>

#ifndef MYFILE_HPP
#define MYFILE_HPP

class OutMyFile {
	
	public:
		OutMyFile(const std::filesystem::path &path);

	public:
		void out(const int n, const double * const val) const;
		void out(const int n, const int *index, const double *val) const;
		void out(const int n, const double * const xval, const double * const yval) const;
	 
	private:
		const std::filesystem::path file_path;
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
		const int n;
		double *arr;

};

#endif 
