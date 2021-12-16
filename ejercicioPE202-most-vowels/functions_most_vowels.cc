/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería informática
 * Informática básica
 * 
 * @file functions_most_vowels.cc
 * @author Alberto Antonio Hernández Hernández  alu0101433905@ull.edu.es
 * @brief definición de las funciones usadas en most_vowels.cc
 * @version 0.1
 * @date 2021-12-16
 */

#include "functions_most_vowels.h"

int max_vowel_counter {0};
std::string most_vowels;

void Usage() {
  std::cout << "Introduzca el nombre de un fichero de texto de esta manera: "
            << std::endl;
  std::cout << "./most_vowels [nombre del fichero]" << std::endl;
}

/**
 * Función que cuenta las vocales de una palabra y guarda la palabra con más
 * vocales en un string.
 *
 * @param vector con todas las palabras del fichero
 * @return string con la palabra con más vocales
 */

std::string Vowels(std::vector<std::string> words) {
  char vowels[10] {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
  int vowels_counter {0};
  for (int i = 0; i < words.size(); ++i) {
    std::string word = words[i];
    for (int j = 0; j < word.length(); ++j) {
      for (int k = 0; k < 10; ++k) {
        if (word.at(j) == vowels[k]) {
          ++vowels_counter;
        } 
      }
      if (vowels_counter > max_vowel_counter) {
        max_vowel_counter = vowels_counter;
        most_vowels = word;
      }
    }
    vowels_counter = 0;
  }
  return most_vowels;
}