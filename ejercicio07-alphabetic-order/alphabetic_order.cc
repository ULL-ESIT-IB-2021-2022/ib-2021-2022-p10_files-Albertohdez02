/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería informática
 * Informática básica
 * 
 * @file alphabetic_order.cc
 * @author Alberto Antonio Hernández Hernández  alu0101433905@ull.edu.es
 * @brief programa que lee un fichero de texto introducido por línea de 
 *        comando e imprime en distintos ficheros las palabras de dicho
 *        archivo según su primera letra respecto al alfabeto.
 * @version 0.1
 * @date 2021-12-12
 */

#include "functions_alphabetic.h"

int main(int argc, char* argv[]) {
  Usage(argc, argv);
  const std::string input_nombre = argv[1];
  Organizar(input_nombre);
  return 0;
}
