#include <iostream>

// Luhn Algorithm
// 1. Double every second digit from right to left, if doubled number is 2 digits, split them
// 2. Add all single digits from step 1
// 3. Add all odd numbered digits from right to left
// 4. Sum results from step 2 & 3
// 5. if step 4 is divisible by 10, card number is valid

void split(std::string &cardNumber);
int getDigit(int number);
int sumOddDigits(const std::string cardNumber);
int sumEvenDigits(const std::string cardNumber);
int main()
{
    std::string cardNumber; // = "6011000990139424"; // 6011 0009 9013 9424
    int result = 0;

    std::cout << "Enter credit card #: ";
    std::cin >> cardNumber;

    result = sumEvenDigits(cardNumber) + sumOddDigits(cardNumber);

    if (result % 10 == 0)
    {
        std::cout << "Card number is valid";
    }
    else
    {
        std::cout << "Card number is not valid";
    }

    return 0;
}

void split(std::string &cardNumber)
{
    for (int i = 0; i < cardNumber.length(); i++)
    {
        if (i > 0 && i % 5 == 0)
        {
            cardNumber.insert(i - 1, " ");
        };
    }
}

int getDigit(int number)
{
    return number % 10 + ((number / 10) % 10);
}
int sumOddDigits(const std::string cardNumber)
{
    int sum = 0;

    for (int i = cardNumber.size() - 1; i >= 0; i -= 2)
    {
        sum += cardNumber[i] - '0';
    }

    return sum;
}

int sumEvenDigits(const std::string cardNumber)
{
    int sum = 0;

    for (int i = cardNumber.size() - 2; i >= 0; i -= 2)
    {
        sum += getDigit((cardNumber[i] - '0') * 2);
    }

    return sum;
}