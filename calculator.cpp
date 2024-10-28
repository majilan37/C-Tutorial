#include <iostream>
#include <cmath>

using namespace std;

using string = std::string;
using number = double;

int main()
{
    number a;
    number b;
    char op;

    cout << "Welcome to my simple calculator. " << "\n";

    cout << "Insert first number: ";
    cin >> a;

    cout << "Insert second number: ";
    cin >> b;

    cout << "Insert operation type: ";
    cin >> op;

    switch (op)
    {
    case '+':
        cout << "The result is " << a + b;
        break;

    case '-':
        cout << "The result is " << a - b;
        break;

    case '*':
        cout << "The result is " << a * b;
        break;

    case '/':
        cout << "The result is " << a / b;
        break;

    default:
        cout << "That wasn't a valid operator" << endl;
    };

    return 0;
}