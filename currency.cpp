#include <iostream>

int main() {
  
  double colombian;
  double brazilian;
  double peruvian;

  std::cout << "Enter number of Colombian Pesos:  ";
  std::cin >>  colombian;

  std::cout << "Enter number of Brazilian Reais:  ";
  std::cin >> brazilian;

  std::cout << "Enter number of Peruvian Soles: ";
  std::cin >> peruvian;

  double pesos = colombian / 18.02;
  double reais = brazilian / 5.07;
  double soles = peruvian / 3.76;

  double total = pesos + reais + soles;

  std::cout << "US Dollars = $ " << total << "\n";
  
}
