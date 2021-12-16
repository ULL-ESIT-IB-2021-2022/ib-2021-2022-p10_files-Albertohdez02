/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería informática
 * Informática básica
 * 
 * @file functions.cc
 * @author Alberto Antonio Hernández Hernández  alu0101433905@ull.edu.es
 * @brief archivo que contiene una función usage para el correcto uso del
 *        programa y otra función que recibe una palabra y rota sus vocales
 *        una posición más.
 * @version 0.1
 * @date 2021-12-12
 */

#include "functions.h"

void Usage() {
  std::cout << "Introduzca el nombre de un fichero de texto de esta manera: "
            << std::endl;
  std::cout << " ./rotate_vowels [nombre del fichero]" << std::endl;
}

std::string RotatedVowels(const std::string input) {
  std::string aux = input;
  for (int i = 0; i < input.length(); ++i) {
    if (input[i] == 'a') {
      aux[i] = 'e';
    }
    if (input[i] == 'e') {
      aux[i] = 'i';
    }
    if (input[i] == 'i') {
      aux[i] = 'o';
    }
    if (input[i] == 'o') {
      aux[i] = 'u';
    }
    if (input[i] == 'u') {
      aux[i] = 'a';
    }
  }
  return aux;
}