#include <iostream>

using namespace std;
int main()
{

    // a pointer is a variable that stores a memory address of another variable
    // sometimes it's easy to work with an address

    // & address-of operator
    // * dereference operator

    string name = "Maji";
    string *pName = &name;

    string freePizzas[5] = {"Pizza1", "Pizza2", "Pizza3", "Pizza4", "Pizza5"};
    string *pFreePizza = freePizzas;

    int age = 22;
    int *pAge = &age;

    cout << pName << "\n";
    cout << *pName << "\n"; // to access value of a given address from a the pointer, you add *
    cout << pAge << "\n";
    cout << *pAge << "\n";

    cout << pFreePizza;

    return 0;
}