#include <iostream>

int myNum = 1;

void printNum();
void printNum(int myNum);

int main()
{

    int myNum = 5;

    printNum();
    printNum(myNum);

    std::cout << ::myNum;

    return 0;
}

void printNum()
{
    std::cout << ::myNum << "\n";
}

void printNum(int myNum)
{

    std::cout << ::myNum << "\n";
}