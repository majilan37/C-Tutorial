#include <iostream>

using namespace std;

class Student
{
public:
    string name;
    int age;
    double gpa;

    Student(string x, int y, double z)
    {
        name = x;
        age = y;
        gpa = z;
    }
};

int main()
{

    // constructor is a special method that is auto called when an object is instantiated

    Student student1("Mohamed", 22, 2.5);

    cout << student1.name << '\n';
    cout << student1.age << '\n';
    cout << student1.gpa << '\n';

    Student student2("Patrick", 25, 1.5);

    cout << student2.name << '\n';
    cout << student2.age << '\n';
    cout << student2.gpa << '\n';

    return 0;
}