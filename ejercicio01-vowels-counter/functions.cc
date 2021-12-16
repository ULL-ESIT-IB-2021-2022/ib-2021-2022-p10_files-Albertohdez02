/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería informática
 * Informática básica
 * 
 * @file functions.cc
 * @author Alberto Antonio Hernández Hernández  alu0101433905@ull.edu.es
 * @brief funciones que leen el número de consonantes y vocales en una palabra
 *        e imprimen las palabras que más tengan de cada una.
 * @version 0.1
 * @date 2021-12-11
 */

#include "functions.h"

int max_vowel_counter {0};
int max_consonant_counter {0};
std::string most_vowels;
std::string most_consonants;

void Usage() {
  std::cout << "Introduzca el nombre de un fichero de texto de esta manera: "
            << std::endl;
  std::cout << "./vowels_consonants [nombre del fichero]" << std::endl;
}

void Vowels(std::vector<std::string> words) {
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
  std::cout << "Más vocales: " << most_vowels << std::endl;
}

void Consonants(std::vector<std::string> words) {
  int consonant_counter {0};
  for (int i = 0; i < words.size(); ++i) {
    std::string word = words[i];
    for (int j = 0; j < word.length(); ++j) {
      if (word[j] >= 'A' && word[j] <= 'Z') {
        if (word[j] != 'A' && word[j] != 'E' && word[j] != 'I') {
          if (word[j] != 'O' && word[j] != 'U') {
            ++consonant_counter;
          }
        }
      }
      if (word[j] >= 'a' && word[j] <= 'z') {
        if (word[j] != 'a' && word[j] != 'e' && word[j] != 'i') {
          if (word[j] != 'o' && word[j] != 'u') {
            ++consonant_counter;
          }
        }
      }
      if (consonant_counter > max_consonant_counter) {
        max_consonant_counter = consonant_counter;
        most_consonants = word;
      }
    }
    consonant_counter = 0;
  }
  std::cout << "Más consonantes: " << most_consonants << std::endl;
}