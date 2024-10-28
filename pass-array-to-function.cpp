#include <iostream>

double getTotal(double array[], int size);

int main()
{

    double prices[] = {49.99, 15.5, 99.45};

    int size = sizeof(prices) / sizeof(double);
    double total = getTotal(prices, size);

    std::cout << "$" << total;

    return 0;
}

double getTotal(double array[], int size)
{
    double total = 0;

    for (int i = 0; i < size; ++i)
    {
        total += array[i];
    }

    return total;
}