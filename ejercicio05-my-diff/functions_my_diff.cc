/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería informática
 * Informática básica
 * 
 * @file functions_my_diff.cc
 * @author Alberto Antonio Hernández Hernández  alu0101433905@ull.edu.es
 * @brief archivo que contiene una función usage para el correcto uso del
 *        programa y otra función que recibe una palabra y rota sus vocales
 *        una posición más.
 * @version 0.1
 * @date 2021-12-12
 */

#include "functions_my_diff.h"

void Usage() {
  std::cout << "Introduzca el nombre de un fichero de texto de esta manera: "
            << std::endl;
  std::cout << " ./alphabetic_order [nombre del fichero]" << std::endl;
}