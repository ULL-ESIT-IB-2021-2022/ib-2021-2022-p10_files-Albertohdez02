/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería informática
 * Informática básica
 * 
 * @file functions_criptography.h
 * @author Alberto Antonio Hernández Hernández  alu0101433905@ull.edu.es
 * @brief cabecera de funciones
 * @version 0.1
 * @date 2021-12-12
 */

#include <iostream>
#include <fstream>
#include <string>
#include <vector>

#ifndef FUNCTIONS_CRIPTOGRAPHY_H
#define FUNCTIONS_CRIPTOGRAPHY_H

void Usage();

std::string XorEncript(std::ifstream& input, const std::string& key);

std::string XorDecript(std::ifstream& input, const std::string& key);

std::string CaesarEncript(std::ifstream& input, const std::string& key);

std::string CaesarDecript(std::ifstream& input, const std::string& key);

#endif /// FUNCTIONS_CRIPTOGRAPHY_H