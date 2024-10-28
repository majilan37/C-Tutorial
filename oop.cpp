#include <iostream>

using namespace std;

class Human
{
public:
    string name = "Med";
    string occupation = "Programer";
    int age = 22;

    void eat()
    {
        cout << "This person is eating";
    };

    void drink()
    {
        cout << "This person is drinking";
    };

    void sleep()
    {
        cout << "This person is sleeping";
    };
};

int main()
{
    // Object is a collection of attributes and methods they can have characteristics and could perform actions.
    // Can be used to mimic real world items (ex. Phone, Book, Dog).
    // Created from class which acted as blue-print.

    Human human1;

    human1.name = "Rick";
    human1.occupation = "Scientist";
    human1.age = 50;

    cout << human1.name << '\n';
    cout << human1.occupation << '\n';
    cout << human1.age << '\n';

    human1.eat();
    human1.drink();
    human1.sleep();

    return 0;
}