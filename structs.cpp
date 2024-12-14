#include <iostream>

struct Student
{
    std::string name;
    double gpa;
    bool enrolled;
};

int main()
{

    // struct is a structure that groups related variables under one name,
    // structs can contain many different data types (strings, variables, bool, etc).
    // variables in struct are known as "members".
    // members can be access with "." "Class member access operator".

    Student student1;

    student1.name = "Majilan";
    student1.gpa = 3.2;
    student1.enrolled = true;

    std::cout << student1.name << "\n";
    std::cout << student1.gpa << "\n";
    std::cout << student1.enrolled << "\n";

    std::cout << "\n";

    Student student2;

    student2.name = "Med";
    student2.gpa = 2.2;
    student2.enrolled = false;

    std::cout << student2.name << "\n";
    std::cout << student2.gpa << "\n";
    std::cout << student2.enrolled << "\n";

    std::cout << "\n";

    Student student3;

    student3.name = "Amin";
    student3.gpa = 1.4;
    student3.enrolled = true;

    std::cout << student3.name << "\n";
    std::cout << student3.gpa << "\n";
    std::cout << student3.enrolled << "\n";
}