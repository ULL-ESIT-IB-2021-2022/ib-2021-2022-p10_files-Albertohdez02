/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería informática
 * Informática básica
 * 
 * @file most_vowels.cc
 * @author Alberto Antonio Hernández Hernández  alu0101433905@ull.edu.es
 * @brief  programa que lee todas las palabras que hay en un fichero e imprime
 *         la palabra con más vocales en otro fichero.
 * @version 0.1
 * @date 2021-12-16
 */

#include "functions_most_vowels.h"

int main(int argc, char* argv[]) {
  if (argc != 2) {
    std::cout << "falta un nombre de un fichero como parámetro" << std::endl;
    std::cout << "Pruebe './most_vowels --help' para más información."
              << std::endl;
  } else {
    std::string help = "--help";
    std::string argv1 {argv[1]};
    if (argv1 == help) {
      Usage();
    } else {
      std::string input;
      std::fstream sample_file;
      std::ofstream output_file {"most_vowels.txt"};
      std::vector<std::string> words;
      sample_file.open(argv[1], std::fstream::in);
      while (sample_file >> input) {
        words.push_back(input);
      }
      output_file << Vowels(words) << std::endl;
      sample_file.close();
      output_file.close();
    }
  }
  return 0;
}