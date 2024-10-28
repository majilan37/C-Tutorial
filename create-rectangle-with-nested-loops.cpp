#include <iostream>

int main()
{

    // Rectangle Triangle (upside down) (from 1 - 10)
    // for (int i = 1; i <= 10; i++)
    // {
    //     for (int j = i; j <= 10; j++)
    //     {
    //         std::cout << j << " ";
    //     }

    //     std::cout << "\n";
    // }

    //  Rectangle Triangle (upside down) (from 10 - 1)
    // for (int i = 10; i >= 1; i--)
    // {
    //     for (int j = i; j >= 1; j--)
    //     {
    //         std::cout << j << " ";
    //     }

    //     std::cout << "\n";
    // }

    //  Rectangle Triangle (Right side up) (from 1 - 10)
    // for (int i = 1; i <= 10; i++)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         std::cout << j << " ";
    //     };

    //     std::cout << "\n";
    // }

    // Rectangle Triangle (Right side up) (from 10 - 1)
    // for (int i = 10; i >= 1; i--)
    // {
    //     for (int j = 10; j >= i; j--)
    //     {
    //         std::cout << j << " ";
    //     };

    //     std::cout << "\n";
    // }

    // Isosceles Triangle (from 1 - 10) (upside down)
    // for (int i = 1; i <= 10; i++)
    // {
    //     for (int j = 1; j <= 10; j++)
    //     {
    //         if (j < i)
    //         {
    //             std::cout << " ";
    //             continue;
    //         };

    //         std::cout << j << " ";
    //     }

    //     std::cout << "\n";
    // };

    // Isosceles Triangle  (from 1 - 10) (Right side up)
    for (int i = 10; i >= 1; i--)
    {
        for (int j = 1; j <= 10; j++)
        {
            if (j < i)
            {
                std::cout << "-";
                continue;
            }

            std::cout << j << " ";
        }
        std::cout << "\n";
    }

    return 0;
}