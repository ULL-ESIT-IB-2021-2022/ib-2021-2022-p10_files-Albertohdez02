/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería informática
 * Informática básica
 * 
 * @file my_diff.cc
 * @author Alberto Antonio Hernández Hernández  alu0101433905@ull.edu.es
 * @brief programa que compara dos ficheros de texto e imprime en pantalla
 *        las diferentes líneas que hay entre estos y la localización de la
 *        línea.
 * @version 0.1
 * @date 2021-12-11
 */

#include "functions_my_diff.h"

int main(int argc, char* argv[]) {
  if (argc != 3) {
    std::cout << "Debe introducir solo un parámetro después del ejecutable"
              << std::endl;
    std::cout << "Para más información escriba './rotate_vowels --help"
              << std::endl;
  } else {
    std::string help {"--help"};
    std::string argv1 {argv[1]};
    if (argv1 == help) {
      Usage();
    } else {
      std::ifstream file_one {argv[1]};
      std::ifstream file_two {argv[2]};
      std::string words_one;
      std::string words_two;
      int line {1};
      while (getline(file_one, words_one)) {
        getline(file_two, words_two);
        if (words_one != words_two) {
          std::cout << words_one << " y " << words_two << " no son iguales "
                    << std::endl;
          std::cout << "Línea: " << line << std::endl;
        }
        ++line;
      }
    }
  }
  return 0;
}