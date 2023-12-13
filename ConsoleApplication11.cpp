#include<iostream>
using namespace std;

class Student
{
    char* name;
    int age;

public:
    Student() // constructor by default
    {
        cout << "Constructor by default\n";
        name = nullptr;
        age = 0;
    }

    Student(const char* Name, int Age) // constructor with parameters
    {
        cout << "Constructor with parameters\n";
        name = new char[strlen(Name) + 1];
        strcpy_s(name, strlen(Name) + 1, Name);
        age = Age;
    }

    void Output()
    {
        if (name == nullptr)
        {
            cout << "Empty object!\n";
            return;
        }
        cout << "Name: " << name << endl
            << "Age: " << age << endl << endl;
    }

    ~Student()
    {
        cout << "Destructor\n";
        delete[] name;
    }
};



void AddStudent(Student* arr,int& size,const char* name,int age) 
{
    Student NewStudent(name, age);
    Student* temp = new Student[size + 1];
    for (int i = 0;i < size;i++) 
    {
        temp[i] = arr[i];
    }
    temp[size] = NewStudent;
    arr = temp;
    size++;
}

int main()
{
    int size = 2;
    Student* mas = new Student[size]
    {
        {"Vladislav", 15},
        {"Oleg", 19}
    };
    for (int i = 0; i < size; i++)
    {
        mas[i].Output();
    }
    cout << "\n\n";
    AddStudent(mas, size, "Arsen", 16);
    for (int i = 0; i < size; i++)
    {
        mas[i].Output();
    }
    cout << "\n\n";
    delete[] mas;
}