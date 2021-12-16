/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería informática
 * Informática básica
 * 
 * @file functions_alphabetic.h
 * @author Alberto Antonio Hernández Hernández  alu0101433905@ull.edu.es
 * @brief cabeceras de las funciones usadas en alphabetic_order.cc
 * @version 0.1
 * @date 2021-12-14
 */

#ifndef FUNCTIONS_ALPHABETIC_H
#define FUNCTIONS_ALPHABETIC_H

#include <iostream>
#include <fstream>
#include <iostream>
#include <vector>

const std::string kHelpText = "Este programa organiza las palabras \
de un archivo de texto y las organiza por su primera letra";

void Usage(int argc, char *argv[]);

void Organizar(const std::string& input_nombre);

#endif /// FUNCTIONS_ALPHABETIC_H