#include <iostream>

int main() {
  int num1, num2;
  char opr;

  std::cout << "Calculator" << std::endl;
  std::cout << "version 1.3.1 / build 107" << std::endl;
  std::cout << "Calculator syntax - number1 (symbol) number2." << std::endl;
  std::cout << "Allowed symbols are +, -, *, / and %." << std::endl;
  std::cout << "Enter the two integers separated by a space: ";
  std::cin >> num1 >> num2;
  std::cout << "Enter the math operator (+, -, *, / or %): ";
  std::cin >> opr;
  std::cout << "Calculating equation..." << std::endl;
  switch (opr) {
    case '+':
      std::cout << num1 + num2 << std::endl;
      break;
    case '-':
      std::cout << num1 - num2 << std::endl;
      break;
    case '*':
      std::cout << num1 * num2 << std::endl;
      break;
    case '/':
      if (num2 != 0) {
        std::cout << num1 / num2 << std::endl;
      }
      else {
        std::cout << "Cannot divide by zero." << std::endl;
        break;
      }
    case '%':
      std::cout << num1 % num2 << std::endl;
        break;
    default:
      std::cout << "Illegal operation. Please try again." << std::endl;
  }
  std::cout << "Press any key to exit..." << std::endl;
  std::cin.get();
  return 0;
}