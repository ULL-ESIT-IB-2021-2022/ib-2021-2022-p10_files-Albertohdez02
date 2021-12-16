/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería informática
 * Informática básica
 * 
 * @file functions.cc
 * @author Alberto Antonio Hernández Hernández  alu0101433905@ull.edu.es
 * @brief función usage para el correcto uso del programa.
 * @version 0.1
 * @date 2021-12-11
 */

#include "functions.h"

void Usage() {
  std::cout << "Introduzca el nombre de un fichero de texto de esta manera: "
            << std::endl;
  std::cout << " ./line_number [nombre del fichero]" << std::endl;
}