#include <iostream>

void new_line()
{
    std::cout << "\n";
}

int main()
{

    int num;
    int guess;
    int tries;

    srand(time(NULL));
    num = (rand() % 100) + 1;

    std::cout << "***** Number guessing game ******";
    new_line();

    // do
    // {
    //     std::cout << "Try your guess: ";
    //     std::cin >> guess;

    //     ++tries;

    //     if (num == guess)
    //     {
    //         new_line();
    //         std::cout << "Your guess is correct";
    //         break;
    //     }
    //     else
    //     {
    //         std::cout << "You failed, Try again: ";
    //         new_line();
    //     }
    // } while (tries < 10);

    // if (tries >= 10)
    // {
    //     std::cout << "You exhausted all your chances";
    //     new_line();
    //     std::cout << "The correct number is " << num;
    // }

    do
    {
        std::cout << "Enter a guess between 1-100: ";
        std::cin >> guess;

        tries++;

        if (num < guess)
        {
            std::cout << "Too high!";
        }
        else if (num > guess)
        {
            std::cout << "Too low!";
        }
        else
        {
            std::cout << "CORRECT, # of tries: " << tries;
            break;
        }

        new_line();

    } while (num != guess);

    return 0;
}