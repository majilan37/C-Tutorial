#include <iostream>

void bakePizza();
void bakePizza(std::string topping1);
void bakePizza(std::string topping1, std::string topping2);

int main()
{
    bakePizza();

    bakePizza("meat");

    bakePizza("fruit de mers", "ton");

    return 0;
}

void bakePizza()
{
    std::cout << "Here is your pizza! \n";
}

void bakePizza(std::string toppings1)
{
    std::cout << "Here is your " << toppings1 << " pizza! \n";
}

void bakePizza(std::string toppings1, std::string toppings2)
{
    std::cout << "Here is your " << toppings1 << " and " << toppings2 << " pizza! \n";
}