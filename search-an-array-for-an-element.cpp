#include <iostream>

int searchArray(int numbers[], int size, int number);

int main()
{

    int numbers[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(numbers) / sizeof(int);
    int index;
    int myNum;

    std::cout << "Enter an number to search for ";
    std::cin >> myNum;

    index = searchArray(numbers, size, myNum);

    if (index != -1)
        std::cout << "The number's position is " << index;

    else
        std::cout << "The number's position not found ";

    return 0;
}

int searchArray(int numbers[], int size, int number)
{
    int index;

    for (int i = 0; i < size; i++)
    {
        int current = numbers[i];

        if (current == number)
        {
            return i;
        }
    }

    return -1;
}