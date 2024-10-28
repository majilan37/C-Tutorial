#include <iostream>

void sort(int array[], int size);

int main()
{

    int numbers[] = {10, 2, 1, 5, 8, 3, 7, 9, 4, 6};
    int size = sizeof(numbers) / sizeof(int);

    // Bubble sort: means you start at index 0, you compare it to the next element, if it's
    // greater, then you switch indexes, if not you move to the next element, repeat the process until
    // the end of the array

    sort(numbers, size);

    for (int number : numbers)
    {
        std::cout << number << " ";
    }

    return 0;
}

void sort(int array[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        int temp;
        for (int j = 0; j < size - i - 1; j++) // j < size - i - 1 because we don't want to loop on elements that are already sorted .
        {
            if (array[j] > array[j + 1])
            {
                temp = array[j];
                array[j] = array[j + 1]; // 2
                array[j + 1] = temp;
            }
        }
    }
}