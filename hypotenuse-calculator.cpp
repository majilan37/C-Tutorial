#include <iostream>
#include <cmath>

using namespace std;
int main()
{
    double a;
    double b;
    double c;

    cout << "value of a : ";
    cin >> a;

    cout << "value of b : ";
    cin >> b;

    c = sqrt(pow(a, 2) + pow(b, 2));

    cout << "hypotenuse'value is " << c;

    return 0;
}