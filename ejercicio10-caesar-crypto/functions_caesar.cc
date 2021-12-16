/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería informática
 * Informática básica
 * 
 * @file functions_caesar.cc
 * @author Alberto Antonio Hernández Hernández  alu0101433905@ull.edu.es
 * @brief definción de la función que devuelve el una letra transformada
 *        por el cifrado de Cesar.
 * @version 0.1
 * @date 2021-12-15
 */

#include "functions_caesar.h"

char Encoded(char letter, int code){
  return (((letter - 'a' - code) % 26) + 'A');
}