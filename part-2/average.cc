// Clay Choi
// c_choi@csu.fullerton.edu
// @c-ch0i
// Partners:@andrew4pham

#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* argv[]) {
  std::vector<std::string> arguments{argv, argv + argc};
  if (arguments.size() < 2) {
    std::cout << "error: you must supply at least one number";
    return 1;
  }

  double count = 0.0;
  double total = 0.0;
  double value = 0.0;
  for (int loop = 1; loop < arguments.size(); loop++) {
    value = std::stod(arguments.at(loop));
    total += value;
    count++;
  }
  double average = total / count;
  std::cout << "average = " << average << "\n";
  return 0;
}
