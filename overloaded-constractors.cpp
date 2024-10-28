#include <iostream>

using namespace std;

class Pizza
{
public:
    string topping1;

    Pizza(string topping1)
    {
        this->topping1 = topping1;
    };
};

int main()
{
    Pizza pizza1("pepperoni");

    cout << pizza1.topping1;

    return 0;
}