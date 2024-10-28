#include <iostream>

int main()
{

    std::string cars[][4] = {{"Mustang", "Escape", "F-150"},
                             {"Corvette", "Equinox", "Silverado"},
                             {"Challanger", "Durango", "Ram 1500"},
                             {"Ferari", "Lamborghini", "Porsche"}};

    // std::cout << cars[0][0] << " ";
    // std::cout << cars[0][1] << " ";
    // std::cout << cars[0][2] << "\n";

    // std::cout << cars[1][0] << " ";
    // std::cout << cars[1][1] << " ";
    // std::cout << cars[1][2] << "\n";

    // std::cout << cars[2][0] << " ";
    // std::cout << cars[2][1] << " ";
    // std::cout << cars[2][2] << "\n";

    // std::cout << cars[3][0] << " ";
    // std::cout << cars[3][1] << " ";
    // std::cout << cars[3][2] << "\n";

    int rows = sizeof(cars) / sizeof(cars[0]);
    int columns = sizeof(cars[0]) / sizeof(std::string);

    // Loop through it
    for (int i = 0; i < rows; i++)
    {
        std::cout << cars[i] << " ";

        for (int j = 0; j < columns; j++)
        {
            std::cout << cars[i][j] << " ";
        }

        std::cout << "\n";
    }

    return 0;
}