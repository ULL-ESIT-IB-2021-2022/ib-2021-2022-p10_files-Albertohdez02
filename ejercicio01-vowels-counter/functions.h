/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería informática
 * Informática básica
 * 
 * @file vowels_consonants.cc
 * @author Alberto Antonio Hernández Hernández  alu0101433905@ull.edu.es
 * @brief cabecera de las funciones definidas en functions.cc y usadas en
 *        vowels_consonants.cc
 * @version 0.1
 * @date 2021-12-11
 */

#include <iostream>
#include <fstream>
#include <vector>

#ifndef FUNCTIONS_H
#define FUNCTIONS_H

void Usage();

void Vowels(std::vector<std::string> words);

void Consonants(std::vector<std::string> words);


#endif /// FUNCTIONS_H