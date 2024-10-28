#include <iostream>

using namespace std;
int main()
{

    // type conversion is casting one data type to another

    double x = (int)3.4;

    cout << x << "\n";

    char letter = 100;

    cout << letter << '\n';

    int correct = 8;
    int questions = 10;

    double score = (correct / (double)questions) * 100;
    cout << score << '%';

    return 0;
}