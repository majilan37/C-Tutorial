#include <iostream>

int main()
{
    std::string questions[] = {"1. What year C++ was created ?",
                               "2. Who invented C++",
                               "3. What is the predecessor of C++",
                               "4. Is earth flat ?"};

    std::string options[][4] = {
        {"A. 1969", "B. 1975", "C. 1985", "D. 1989"},
        {"A. Guido van Rossum", "B. Bjarne Stroustrup", "C. Jhon Carmak", "D. Mark Zuck"},
        {"A. C", "B. C+", "C. C--", "D. B++"},
        {"A. Yes", "B. No", "C. Maybe", "D. sometimes"},
    };

    char keys[4] = {'C', 'B', 'A', 'B'}; // Right answers

    char answers[4]; // Answers set by user

    int score = 0; //  user's score if answer is right

    std::cout << "score: " << score << "\n";

    int rows = sizeof(options) / sizeof(options[0]);
    int columns = sizeof(options[0]) / sizeof(std::string);

    std::cout << "******* Welcome the QUIZ GAME ********";

    std::cout << "\n";
    std::cout << "\n";

    // Loop through questions
    for (int i = 0; i < rows; i++)
    {
        char answer;
        std::cout << "***********\n";
        std::cout << questions[i]; // Display current question
        std::cout << "\n";
        std::cout << "***********\n";

        // Loop through options and display them
        for (int j = 0; j < columns; j++)
        {
            std::cout << options[i][j] << "\n";
        }

        std::cout << "Enter your answer (A, B, C, D): ";
        std::cin >> answer;

        answers[i] = toupper(answer);

        // Check if answer is right
        if (answers[i] == keys[i])
        {
            std::cout << "RIGHT!";
            score++;
        }
        else
        {
            std::cout << "WRONG!";
        }

        std::cout << "\n";
    }

    std::cout << "Your answers";
    std::cout << "\n";
    for (char answer : answers)
    {
        std::cout << answer << " ";
    }
    std::cout << "\n";
    std::cout << "Your score: ";

    std::cout << (score / (double)rows) * 100 << "%";

    return 0;
}