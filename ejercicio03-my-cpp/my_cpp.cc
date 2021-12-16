/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería informática
 * Informática básica
 * 
 * @file my_cpp.cc
 * @author Alberto Antonio Hernández Hernández  alu0101433905@ull.edu.es
 * @brief programa que copia un fichero de texto introducido por línea de 
 *        comando.
 * @version 0.1
 * @date 2021-12-11
 */

#include "functions.h"

int main(int argc, char* argv[]) {
  if (argc != 2) {
    std::cout << "Debe introducir solo un parámetro despues del ejecutable"
              << std::endl;
    std::cout << "Para más información escriba './line_number --help"
              << std::endl;
  } else {
    std::string help = "--help";
    std::string argv1 = argv[1];
    if (argv1 == help) {
      Usage();
    } else {
      std::ifstream original {argv[1]};
      std::ofstream copy {"copy.txt"};
      std::string input;
      if (original && copy) {
        while (getline(original, input)) {
          copy << input << std::endl;
        }
        original.close();
        copy.close();
      } else {
        std::cout << "No se puede leer el archivo" << std::endl;
      }
    }
  }
  return 0;
}