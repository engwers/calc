#include <iostream>
#include <filesystem>

#ifndef MYFILE_HPP
#define MYFILE_HPP

class OutMyFile {
	
  public:
    OutMyFile(const std::filesystem::path &path);

  public:
    void out(int N, const double * const val) const;

    template <typename T>
    void out(int N, const T * const xval, const double * const yval) const;
    // void out(const double * const xval, const double * const yval) const;
	 
  private:
    const std::filesystem::path file_path;
};

class InMyFile {

  public:
    InMyFile(const std::filesystem::path &path);
    ~InMyFile();

  public:
    inline void check_index(const int idx) const;
    int getNum() const;
    double operator() (const int m) const;

  private:
    const std::filesystem::path file_path;
    const int N;
    double *arr = nullptr;

};

#endif 
