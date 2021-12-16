/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería informática
 * Informática básica
 * 
 * @file dfa.h
 * @author Alberto Antonio Hernández Hernández  alu0101433905@ull.edu.es
 * @brief private y public de la clase usada por el DFA
 * @version 0.1
 * @date 2021-12-12
 */

#ifndef DFA_H
#define DFA_H

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>

class DFA {
  public:
    DFA(std::string input);
    ~DFA();
    void Print() const;
  private:
    int state_number_;
    unsigned int initial_state_;
    std::vector<unsigned int> accepted_;
    std::vector<std::string> delta_;
};

#endif // DFA_H