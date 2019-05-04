#include <iostream>
using namespace std;

int main()
{

  while (true)
  {

    float num1;
    float num2;
    float resultado;
    char operador;
    cout << "------This is a calculator------" << endl << endl;
    cout << "Choose an operator: \n'+' to add two numbers\n'-' to subtract two numbers\n'*' to multiply two numbers\n'/' to divide two numbers\n: ";
    cin >> operador;
    cout << "Choose the first number: ";
    cin >> num1;
    cout << "Choose the second number: ";
    cin >> num2;
    if (operador == '+')
    {
      resultado = num1 + num2;
      cout << resultado << endl << endl;
    }
    if (operador == '-')
    {
      resultado = num1 - num2;
      cout << resultado << endl << endl;
    }
    if (operador == '*')
    {
      if (num1 == 0)
      {
        cout << "Can't multiply 0 by any number . . . " << endl << endl;
      }
      if (num2 == 0)
      {
        cout << "Can't multiply any number by 0 . . . " << endl << endl;
      }
      if (num1 && num2 != 0)
      {
      resultado = num1 * num2;
      cout << resultado << endl << endl;
      }
    }
    if (operador == '/')
    {
      if (num1 == 0)
      {
        cout << "Can't divide 0 by any number . . . " << endl << endl;
      }
      if (num2 == 0)
      {
        cout << "Can't divide any number by 0 . . . " << endl << endl;
      }
      if (num1 && num2 != 0)
      {
      resultado = num1 / num2;
      cout << resultado << endl << endl;
      }
    }

  }

}
