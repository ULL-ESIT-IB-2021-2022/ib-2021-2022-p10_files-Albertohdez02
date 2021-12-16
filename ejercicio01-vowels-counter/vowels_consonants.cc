/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería informática
 * Informática básica
 * 
 * @file vowels_consonants.cc
 * @author Alberto Antonio Hernández Hernández  alu0101433905@ull.edu.es
 * @brief  programa que lee todas las palabras que hay en un fichero e imprime
 *         la palabra con más vocales y la palabra con más consonantes.
 * @version 0.1
 * @date 2021-12-11
 */

#include "functions.h"

int main(int argc, char* argv[]) {
  if (argc != 2) {
    std::cout << "falta un nombre de un fichero como parámetro" << std::endl;
    std::cout << "Pruebe './vowels_consonants --help' para más información."
              << std::endl;
  } else {
    std::string help = "--help";
    std::string argv1 {argv[1]};
    if (argv1 == help) {
      Usage();
    } else {
      std::string input;
      std::fstream file;
      std::vector<std::string> words;
      file.open(argv[1], std::fstream::in);
      while (getline(file, input)) {
        words.push_back(input);
      }
      Vowels(words);
      Consonants(words);
      file.close();
    }
  }
  return 0;
}