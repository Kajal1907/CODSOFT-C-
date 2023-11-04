#include <iostream>
using namespace std;

int main()
{
    char oper;
    float a, b;

    cout << "Enter two operands: ";
    cin >> a >> b;

    cout << "Enter operator: ";
    cin >> oper;

    // Switch statement begins
    switch (oper)
    {
    // If operator is '+'
    case '+':
        cout << a + b;
        break;
    // If operator is '-'
    case '-':
        cout << a - b;
        break;
    // If operator is '*'
    case '*':
        cout << a * b;
        break;
    // If operator is '/'
    case '/':
        cout << a / b;
        break;
    // If any other operator display error message
    default:
        cout << "Error! Incorrect operator";
        break;
    }
    return 0;
}