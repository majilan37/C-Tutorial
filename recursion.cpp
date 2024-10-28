#include <iostream>

void iterativeWalk(int steps);
void recursiveWalk(int steps);
int iterativeFactorial(int n);
int recursiveFactorial(int n);

int main()
{
    // Recursion is a programming technique where a function invoke itself form within
    // break a complex concept into repeatable single steps.

    // (iterative vs recursive)

    // advantages : less & clean code, useful for searching & sorting algorithms.

    // disadvantages: uses more memory, slower.

    // iterativeWalk(100); // iterative approach
    // recursiveWalk(100); // recursive approach

    // int res = iterativeFactorial(4);
    int res = recursiveFactorial(4);

    std::cout << res;

    return 0;
}

void iterativeWalk(int steps)
{
    for (int i = 0; i < steps; i++)
    {
        std::cout << "You take step!\n";
    }
}

void recursiveWalk(int steps)
{
    if (steps > 0)
    {
        std::cout << "You take step!\n";
        recursiveWalk(steps - 1);
    }
}

int iterativeFactorial(int n)
{
    int result = 1;

    for (int i = 1; i <= n; i++)
    {
        result *= i;
    }

    return result;
}

int recursiveFactorial(int n)
{
    //  n! = n * (n – 1) * (n – 2) …. 2 * 1
    // (n – 1)! = (n – 1) * (n – 2) … 2 * 1
    //  then: n! = n * (n – 1)!

    if (n == 1 || n == 0)
        return 1;

    return n * recursiveFactorial((n - 1));
}