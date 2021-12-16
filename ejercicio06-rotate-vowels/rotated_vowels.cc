/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería informática
 * Informática básica
 * 
 * @file rotated_vowels.cc
 * @author Alberto Antonio Hernández Hernández  alu0101433905@ull.edu.es
 * @brief programa que copia un fichero de texto introducido por línea de 
 *        comando y lo imprime rotando las vocales minúsculas por la siguente.
 * @version 0.1
 * @date 2021-12-12
 */

#include "functions.h"

int main(int argc, char* argv[]) {
  if (argc != 2) {
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
      std::ifstream text {argv[1]};
      std::ofstream rotated {"rotated.txt"};
      std::string input;
      if (text && rotated) {
        while (getline(text, input)) {
          rotated << RotatedVowels(input) << std::endl;
        }
        text.close();
        rotated.close();
      } else {
        std::cout << "No se ha podido leer el fichero de texto" << std::endl;
      }
    }
  }
  return 0;
}