/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería informática
 * Informática básica
 * 
 * @file functions.h
 * @author Alberto Antonio Hernández Hernández  alu0101433905@ull.edu.es
 * @brief archivo que contiene las cabeceras de las funciones declaradas
 *        en functions.cc y usadas en rotate_vowels.cc 
 * @version 0.1
 * @date 2021-12-12
 */

#include <iostream>
#include <fstream>
#include <string>
#include <vector>

#ifndef FUNCTION_H
#define FUNCTIONS_H

void Usage();

std::string RotatedVowels(const std::string input);

#endif // FUNCTIONS_H