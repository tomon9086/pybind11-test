#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

#include "twice.hpp"

using namespace std;

int twice(int n) {
  int ret = n * 2;
  return ret;
}

vector<int> vec_double(vector<int> &vec) {
  for (auto &v : vec) {
    v *= 2;
  }
  return vec;
}

PYBIND11_MODULE(cpp_lib, m) {
  m.def("twice", &twice);
  m.def("vec_double", &vec_double);
}
