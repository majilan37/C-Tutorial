#include <iostream>

// cout << insertion operator
// cin >> extraction operator

using namespace std;

int main()
{
    string name;
    int age;

    cout << "What's your age ? :";
    cin >> age;

    cout << "What's your full name ?: ";
    getline(cin >> ws, name);

    cout << "Hello " << name << " and your age is " << age;

    return 0;
}