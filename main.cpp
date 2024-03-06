#include <iostream>

using namespace std;

int main() {
  int16_t oper = 1;
  int16_t firstNumber = 0;
  int16_t secondNumber = 0;
  cout << "Qual operador voce ira utilizar +(1) -(2) *(3) /(4)";
  cin >> oper;
  cout << "Digite primerio numero: ";
  cin >> firstNumber;
  cout << "Digite segundo numero: ";
  cin >> secondNumber;
  if(oper == 1) {
    cout << firstNumber+secondNumber;
    return 0;
  }
  if(oper == 2) {
    cout << firstNumber-secondNumber;
    return 0;
  }
  if(oper == 3) {
    cout << firstNumber-secondNumber;
    return 0;
  }
  if(oper == 4) {
    cout << firstNumber-secondNumber;
    return 0;
  }
  return 0;
}