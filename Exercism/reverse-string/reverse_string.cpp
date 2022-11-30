/**
* Universidad de La Laguna
* Escuela Superior de Ingeniería y Tecnología
* Grado en Ingeniería Informática
* Informática Básica 2022-2023
*
* @file  Reverse_string
* @author Sergio Borrell Alberto alu0101563015@ull.edu.es
* @date Nov 28 2022
* @brief Reverse String.
*/

#include "reverse_string.h"

namespace reverse_string {
  std::string reverse_string(std::string str) {
    std::string reverse;
    for (int i = str.length() - 1; i >= 0; i--) {
      reverse.push_back(str[i]);
    }
    return reverse;
  }
}  // namespace reverse_string
