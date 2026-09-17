#include <iostream>
using namespace std;

class Person 
{
    public:
    void introduce()
    {
     cout << "I am a person" << endl;
    }
};

class Student : public Person
{
    public:
    void study()
    {
     cout << "Student studies" << endl;
    }    
};

class College_Student : public Student
{
    public:
    void attend_college()
    {
     cout << "Student attends college" << endl;
    }
};

int main()
{
    College_Student c_s1;

    c_s1.introduce();
    c_s1.study();
    c_s1.attend_college();

    return 0;
}