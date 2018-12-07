#include <iostream>
#include "resource.h"

using namespace std;

int num1, num2;
char opr;

int main()
{
    cout << "Calculator" << endl;
    cout << "version 1.3.1 / build 107" << endl;
    cout << "" << endl;
    cout << "Calculator syntax - number1 (symbol) number2." << endl;
    cout << "Allowed symbols are +, -, *, / and %." << endl;
    cout << "" << endl;
    cout << "" << endl;
    cout << "Enter the two integers separated by a space: ";
    cin >> num1 >> num2;
    cout << "Enter the math operator (+, -, *, / or %): ";
    cin >> opr;
    cout << "" << endl;
    cout << "Calculating equation..." << endl;
    switch (opr) {
    case '+':
        cout << num1 + num2 << endl;
            break;
    case '-':
        cout << num1 - num2 << endl;
            break;
    case '*':
        cout << num1 * num2 << endl;
            break;
    case '/':
        if (num2 != 0)
            cout << num1 / num2 << endl;
        else
            cout << "Cannot divide by zero." << endl;
                break;
    case '%':
        cout << num1 % num2 << endl;
            break;
    default:
        cout << "Illegal operation. Please try again." << endl;
    }
    cout << "" << endl;
    cout << "Press any key to exit..." << endl;
    cin.get();
    cin.get();
    return 0;
}
