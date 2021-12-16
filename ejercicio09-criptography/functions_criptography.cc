/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería informática
 * Informática básica
 * 
 * @file functions_criptography.cc
 * @author Alberto Antonio Hernández Hernández  alu0101433905@ull.edu.es
 * @brief declaraciones de las funciones de criptography.cc
 * @version 0.1
 * @date 2021-12-12
 */

#include "functions_criptography.h"

void Usage() {
  std::cout << "./criptography -- Cifrado de ficheros" << std::endl;
  std::cout << "Modo de uso: ./criptography fichero_entrada fichero_salida " 
            << "método password operación" << std::endl;
  std::cout << "fichero_entrada: Fichero a codificar" << std::endl;
  std::cout << "fichero_salida:  Fichero codificado" << std::endl;
  std::cout << "método:          Indica el método de encriptado" << std::endl;
  std::cout << "                   1: Cifrado xor" << std::endl;
  std::cout << "                   2: Cifrado de César" << std::endl;
  std::cout << "password:        Palabra secreta en el caso de método 1, "
            << "Valor de K en el método 2" << std::endl;
  std::cout << "operación:       Operación a realizar en el fichero"
            << std::endl;
  std::cout << "                   +: encriptar el fichero" << std::endl;
  std::cout << "                   -: desencriptar el fichero" << std::endl;
}

std::string XorEncript(std::ifstream& input, const std::string& key){
  std::string word;
  std::vector<std::string> lines;
  while (std::getline(input, word)) {
    lines.push_back(word);
  }
  std::string to_encrypt;
  std::string encripted;
  char symbol;
  for (int i = 0; i < lines. size(); ++i) {
    to_encrypt = lines[i];
    encripted = to_encrypt;
    for (int j = 0; j < to_encrypt.length(); ++j) {
      for (int k = 0; k < key.length(); ++k) {
        symbol = (to_encrypt[j] ^ key[k]);
        encripted[j] = symbol;
        if (k == key.length()) {
          k = 0;
        }
      }
    }
  }
  return encripted;
}

std::string XorDecript(std::ifstream& input, const std::string& key) {
  std::string decripted = XorEncript(input, key);
  return decripted;
}

std::string CaesarEncript(std::ifstream& input, const std::string& key){
  std::string word;
  std::ifstream input;
  while(getline(input, word)) {
    for (int i = 0; i < word.size(); ++i) {
      if (word[i] >= 'a' && word[i] <= 'z') { 
        word[i] = word[i] + stoi(key);
      }
      if(word[i] < 'a') { 
        word[i] = word[i] - 'z' + 'a' - 1;
      }
    }
    return word;
  }
}

std::string CaesarDecript(std::ifstream& input, const std::string& key){
  std::string word;
  std::ifstream input;
  while(getline(input, word)) {
    for (int i = 0; i < word.size(); ++i) {
      if (word[i] >= 'a' && word[i] <= 'z') { 
        word[i] = word[i] - stoi(key);
      }
      if(word[i] < 'a') { 
        word[i] = word[i] + 'z' - 'a' + 1;
      }
    }
    return word;
  }
}
