/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería informática
 * Informática básica
 * 
 * @file functions_alphabetic.cc
 * @author Alberto Antonio Hernández Hernández  alu0101433905@ull.edu.es
 * @brief definiciones de las funciones usadas en alphabetic_order.cc
 * @version 0.1
 * @date 2021-12-14
 */

#include "functions_alphabetic.h"

void Usage(int argc, char* argv[]) {
  if (argc != 2) {
    std::cout << argv[0] << ": Falta el nombre del archivo a organizar"
              << std::endl;
    std::cout << "Pruebe " << argv[0] << " --help para más información"
              << std::endl;
    exit(EXIT_SUCCESS);
  }
  std::string parameter{argv[1]};
  if (parameter == "--help") {
    std::cout << kHelpText << std::endl;
    exit(EXIT_SUCCESS);
  }
}
void organizar(const std::string& input_nombre) {
    remove("A.txt");
    remove("B.txt");
    remove("C.txt");
    remove("D.txt");
    remove("E.txt");
    remove("F.txt");
    remove("G.txt");
    remove("H.txt");
    remove("I.txt");
    remove("J.txt");
    remove("K.txt");
    remove("L.txt");
    remove("M.txt");
    remove("N.txt");
    remove("O.txt");
    remove("P.txt");
    remove("Q.txt");
    remove("R.txt");
    remove("S.txt");
    remove("T.txt");
    remove("U.txt");
    remove("V.txt");
    remove("W.txt");
    remove("X.txt");
    remove("Y.txt");
    remove("Z.txt");
  int i = 0;
  int tamanio = 0;
  std::fstream fichero;
  std::string palabra;
  std::vector<std::string> texto;
  std::fstream fichero_output;
  fichero.open(input_nombre, std::fstream::in);
  while (fichero >> palabra) {
    texto.push_back(palabra);
    i++;
    tamanio = i;
  }
  for (i = 0; i < tamanio; i++) {
    palabra = texto.at(i);
    if (palabra[0] == 'a' || palabra[0] == 'A' ) {
      fichero_output.open("A.txt", std::fstream::app);
      fichero_output << palabra << "\n";
      fichero_output.close();
    } else if (palabra[0] == 'b' || palabra[0] == 'B') {
      fichero_output.open("B.txt", std::fstream::app);
      fichero_output << palabra << "\n";
      fichero_output.close();
    }else if (palabra[0] == 'c' || palabra[0] == 'C') {
      fichero_output.open("C.txt", std::fstream::app);
      fichero_output << palabra << "\n";
      fichero_output.close();
    }else if (palabra[0] == 'd' || palabra[0] == 'D') {
      fichero_output.open("D.txt", std::fstream::app);
      fichero_output << palabra << "\n";
      fichero_output.close();
    }else if (palabra[0] == 'e' || palabra[0] == 'E') {
      fichero_output.open("E.txt", std::fstream::app);
      fichero_output << palabra << "\n";
      fichero_output.close();
    }else if (palabra[0] == 'f' || palabra[0] == 'F') {
      fichero_output.open("F.txt", std::fstream::app);
      fichero_output << palabra << "\n";
      fichero_output.close();
    }else if (palabra[0] == 'g' || palabra[0] == 'G') {
      fichero_output.open("G.txt", std::fstream::app);
      fichero_output << palabra << "\n";
      fichero_output.close();
    }else if (palabra[0] == 'h' || palabra[0] == 'H') {
      fichero_output.open("H.txt", std::fstream::app);
      fichero_output << palabra << "\n";
      fichero_output.close();
    }else if (palabra[0] == 'i' || palabra[0] == 'I') {
      fichero_output.open("I.txt", std::fstream::app);
      fichero_output << palabra << "\n";
      fichero_output.close();
    }else if (palabra[0] == 'j' || palabra[0] == 'J') {
      fichero_output.open("J.txt", std::fstream::app);
      fichero_output << palabra << "\n";
      fichero_output.close();
    }else if (palabra[0] == 'k' || palabra[0] == 'K') {
      fichero_output.open("K.txt", std::fstream::app);
      fichero_output << palabra << "\n";
      fichero_output.close();
    }else if (palabra[0] == 'l' || palabra[0] == 'L') {
      fichero_output.open("L.txt", std::fstream::app);
      fichero_output << palabra << "\n";
      fichero_output.close();
    }else if (palabra[0] == 'm' || palabra[0] == 'M') {
      fichero_output.open("M.txt", std::fstream::app);
      fichero_output << palabra << "\n";
      fichero_output.close();
    }else if (palabra[0] == 'n' || palabra[0] == 'N') {
      fichero_output.open("N.txt", std::fstream::app);
      fichero_output << palabra << "\n";
      fichero_output.close();
    }else if (palabra[0] == 'o' || palabra[0] == 'O') {
      fichero_output.open("O.txt", std::fstream::app);
      fichero_output << palabra << "\n";
      fichero_output.close();
    }else if (palabra[0] == 'p' || palabra[0] == 'P') {
      fichero_output.open("P.txt", std::fstream::app);
      fichero_output << palabra << "\n";
      fichero_output.close();
    }else if (palabra[0] == 'q' || palabra[0] == 'Q') {
      fichero_output.open("Q.txt", std::fstream::app);
      fichero_output << palabra << "\n";
      fichero_output.close();
    }else if (palabra[0] == 'r' || palabra[0] == 'R') {
      fichero_output.open("R.txt", std::fstream::app);
      fichero_output << palabra << "\n";
      fichero_output.close();
    }else if (palabra[0] == 's' || palabra[0] == 'S') {
      fichero_output.open("S.txt", std::fstream::app);
      fichero_output << palabra << "\n";
      fichero_output.close();
    }else if (palabra[0] == 't' || palabra[0] == 'T') {
      fichero_output.open("T.txt", std::fstream::app);
      fichero_output << palabra << "\n";
      fichero_output.close();
    }else if (palabra[0] == 'u' || palabra[0] == 'U') {
      fichero_output.open("U.txt", std::fstream::app);
      fichero_output << palabra << "\n";
      fichero_output.close();
    }else if (palabra[0] == 'v' || palabra[0] == 'V') {
      fichero_output.open("V.txt", std::fstream::app);
      fichero_output << palabra << "\n";
      fichero_output.close();
    }else if (palabra[0] == 'w' || palabra[0] == 'W') {
      fichero_output.open("W.txt", std::fstream::app);
      fichero_output << palabra << "\n";
      fichero_output.close();
    }else if (palabra[0] == 'x' || palabra[0] == 'X') {
      fichero_output.open("X.txt", std::fstream::app);
      fichero_output << palabra << "\n";
      fichero_output.close();
    }else if (palabra[0] == 'y' || palabra[0] == 'Y') {
      fichero_output.open("Y.txt", std::fstream::app);
      fichero_output << palabra << "\n";
      fichero_output.close();
    }else if (palabra[0] == 'z' || palabra[0] == 'Z') {
      fichero_output.open("Z.txt", std::fstream::app);
      fichero_output << palabra << "\n";
      fichero_output.close();
    }
  }
}