#include <iostream>

int main()
{
    // break= break out of the loop
    // continue = skip the current iteration

    // for (int i = 1; i <= 20; i++)
    // {
    //     if (i == 15)
    //         continue;

    //     std::cout << i << "\n";
    // };

    for (int i = 1; i <= 20; i++)
    {
        if (i == 13)
        {
            break;
        }

        std::cout << i << "\n";
    }

    return 0;
}