/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería informática
 * Informática básica
 * 
 * @file dfa.cc
 * @author Alberto Antonio Hernández Hernández  alu0101433905@ull.edu.es
 * @brief definción de la clase usada por el DFA
 * @version 0.1
 * @date 2021-12-12
 */

#include "dfa.h"

DFA::DFA(std::string dfa_file) {
  std::ifstream input(dfa_file);
  std::vector<std::string> lines;
  std::string word;
  while (getline(input, word)) {
    lines.push_back(word);
  }
  state_number_ = std::stoi(lines[0]);
  initial_state_ = std::stoi(lines[1]);
  for (int i = 0; i < state_number_; ++i) {
    std::stringstream line(lines[i + 2]);
    std::string element;
    std::vector<std::string> split_line;
    while (getline(line, element, ' ')) {
      split_line.push_back(element);
    }
    if (split_line[1] == "1") {
      accepted_.push_back(std::stoi(split_line[0]));
    }
    for (int j = 0; j < std::stoi(split_line[2]) * 2; ++j) {
      std::stringstream simple_delta;
      simple_delta << "delta(" << split_line[0] << "," << split_line[j + 3];
      ++j;    
      simple_delta << ") = " << split_line[j + 3];
      delta_.push_back(simple_delta.str());
    }
  }

}

DFA::~DFA() {
  state_number_ = 0;
  initial_state_ = 0;
  accepted_.clear();
  delta_.clear();
}

void DFA::Print() const {
  std::cout << "|Q| = " << state_number_ << std::endl;
  std::cout << "q0 = " << initial_state_ << std::endl;
  std::cout << "F = {";
  for (int i {0}; i < accepted_.size(); ++i) {
    if (i == accepted_.size() - 1) {
      std::cout << accepted_[i] << "}" << std::endl;
    } else {
      std::cout << accepted_[i] << ", ";
    }
  }
  for (int i {0}; i < delta_.size(); ++i) {
    std::cout << delta_[i] << std::endl;
  }
}