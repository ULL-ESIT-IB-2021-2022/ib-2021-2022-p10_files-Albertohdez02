/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería informática
 * Informática básica
 * 
 * @file caesar_crypto.cc
 * @author Alberto Antonio Hernández Hernández  alu0101433905@ull.edu.es
 * @brief programa que desencripta un texto cifrado por el criptograma de
 *        Cesar.
 * @version 0.1
 * @date 2021-12-15
 */

#include "functions_caesar.h"

int main(){
  int code;
  char letter;
  while (std::cin >> code) {
    while (std::cin >> letter){
      if (letter == '_'){
        std::cout << " ";
      } else if (letter == '.'){
        std::cout << std::endl;
        std::cin >> code;
      } else if ((letter >= 'a' && letter <= 'z')){
        letter = Encoded(letter, code);
        std::cout << letter;
      } else if (letter >= 'A' && letter <= 'Z'){
        letter = Encoded(letter, code);
        std::cout << letter;
      } else {
        std::cout << letter;
      }
    }
  }
  return 0;
}