#include <iostream>

int main()
{

    // fill(): fills a range of elements with a specified value fill(begins, end, value)
    const int SIZE = 150;

    std::string foods[SIZE];

    // fill(foods, foods + SIZE, "pizza");
    // fill(foods, foods + SIZE / 2, "pizza");
    // fill(foods + SIZE / 2, foods + SIZE, "Burger");
    fill(foods, foods + SIZE / 3, "pizza");
    fill(foods + SIZE / 3, foods + SIZE * 2 / 3, "burger");
    fill(foods + SIZE * 2 / 3, foods + SIZE, "hotdog");

    for (std::string food : foods)
    {
        std::cout << food << "\n";
    }

    return 0;
}