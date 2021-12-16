/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería informática
 * Informática básica
 * 
 * @file criptography.cc
 * @author Alberto Antonio Hernández Hernández  alu0101433905@ull.edu.es
 * @brief programa que encripta o desencripta un fichero de texto por el
 *        método xor o cesar, a elección del usuario.
 * @version 0.1
 * @date 2021-12-12
 */

#include "functions_criptography.h"

int main(int argc, char* argv[]) {
  if (argc < 2) {
    std::cout << "./criptography -- Cifrado de ficheros" << std::endl;
    std::cout << "Modo de uso: ./cripto fichero_entrada fichero_salida método " 
              << "key operación" << std::endl;
    std::cout << "Pruebe ./criptography --help para más información"
              << std::endl;
  } else {
    std::string help {"--help"};
    std::string argv1 {argv[1]};
    if (argv1 == help) {
      Usage();
    } else if (argc = 6) {
      std::ifstream input {argv[1]};
      std::ofstream output {argv[2]};
      std::string method {argv[3]};
      std::string key {argv[4]};
      std::string operation {argv[5]};
      if (input && output) {
        if (method == "1") {
          if (operation == "+") {
            output << XorEncript(input, key) << std::endl;
          }
          if (operation == "-") {
            output << XorDecript(input, key) << std::endl;
          }
        } 
        if (method == "2") {
          if (operation == "+") {
            output << CaesarEncript(input, key) << std::endl;
          }
          if (operation == "-") {
            output << CaesarDecript(input, key) << std::endl;
          }
        }
        input.close();
        output.close();
      } else {
        std::cout << "No se pudo abrir el fichero." << std::endl;
      }
    } else {
      std::cout << "Introduzca 6 parámetros, usar --help para más info"
                << std::endl;
    }
  }
  return 0;
}