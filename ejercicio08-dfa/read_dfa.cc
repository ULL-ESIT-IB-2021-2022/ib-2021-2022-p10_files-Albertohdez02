/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería informática
 * Informática básica
 * 
 * @file read_dfa.cc
 * @author Alberto Antonio Hernández Hernández  alu0101433905@ull.edu.es
 * @brief programa que se comporta como un automata finito determinista.
 * @version 0.1
 * @date 2021-12-12
 */

#include "dfa.h"

void Usage();

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
      DFA dfa(argv1);
      dfa.Print();
    }
  }
  return 0;
}

void Usage() {
  std::cout << "Debe introducir dos parámetros, de la siguiente manera: "
            << std::endl;
  std::cout << "  ./read_dfa [archivo.dfa] " << std::endl;
}