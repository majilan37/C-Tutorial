#include <iostream>

using namespace std;
int main()
{
    // int x = 10;
    // int y = 20;
    // int z = x + y;
    // std::cout << z << std::endl;
    // std::cout << abs(x - y) << std::endl;

    int students = 10;
    // students = students + 1;
    students++; // or students += 1

    // students = students - 1;
    students--; // or students -= 1

    // students = students * 2;
    students *= 2;

    // students = students / 2;
    students /= 2;

    int remainder = students % 3;

    cout << remainder << endl;

    return 0;
}