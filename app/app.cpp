#include <iostream>
#include "header.h"

int main() {
  abi_struct input;
  input.a = 99;
  input.b = '?';

  std::cout << std::endl;
  std::cout << "Accessing abi_struct::a ..." << std::endl;
  std::cout << "          Directly: " << input.a << std::endl;
  std::cout << "Using lib accessor: " << get_struct_a(input) << std::endl;

  return 0;
}
