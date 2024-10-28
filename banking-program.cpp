#include <iostream>
#include <iomanip>

void showBalance(double balance);
double deposit();
double withdraw(double balance);

int main()
{

    double balance = 120;
    int choice = 0;

    do
    {

        std::cout << "*************** \n";
        std::cout << "Enter your choise: \n";

        std::cout << "1. Show balance\n";
        std::cout << "2. Deposit money\n";
        std::cout << "3. Withdraw money\n";
        std::cout << "4. Exit\n";

        std::cin >> choice;

        std::cin.clear();
        fflush(stdin);

        std::cout << "\n";

        switch (choice)
        {
        case 1:
            showBalance(balance);
            break;

        case 2:
            balance += deposit();
            showBalance(balance);
            break;

        case 3:
            balance -= withdraw(balance);
            showBalance(balance);
            break;

        case 4:
            std::cout << "Thanks for visiting";

        default:
            std::cout << "Invalid choice";
            break;
        }

        std::cout << "\n";
        std::cout << "*************** \n";

    } while (choice != 4);

    return 0;
}

void showBalance(double balance)
{
    std::cout << "Your balance is: $" << std::setprecision(2) << std::fixed << balance << "\n";
}

double deposit()
{
    double amount = 0;

    std::cout << "Enter amount to deposit: ";
    std::cin >> amount;

    if (amount > 0)
    {

        return amount;
    }
    else
    {
        std::cout << "That's not a valid amount \n";
        return 0;
    }
}

double withdraw(double balance)
{

    double amount = 0;

    std::cout << "Enter amount to be withdrawn:";
    std::cin >> amount;

    if (amount > balance)
    {
        std::cout << "Withdraw failed\n";
        return 0;
    }

    if (amount < 0)
    {
        std::cout << "That's not a valid amount \n";
        return 0;
    }

    return amount;
}