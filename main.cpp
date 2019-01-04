#include <iostream>
#include <ctime>
#include "GoodStudent.h"

using namespace std;

//struct Student {
//    string name;
//    int age;
//};

//void printStudent(Student *student);

int main() {
//    cout << "Hello, World!" << endl;

//    char a = 'a';
//    cout << sizeof(a);

//    enum color {
//        red, blue
//    } c;
//
//    c = blue;
//    int a;
//
//    a = 3;
//    cout << a;

//    string a = "11";
//    cout << a;

//    int a = 1, b = 2;
//
//    int c = (++a, ++b);
//    cout << c;

//    auto f = [](int a) -> bool {
//        return a > 2;
//    };
//
//    cout << f(3);

//    Student student = {"haha", 123};


//    cout << student.name;

//    printStudent(&student);

    GoodStudent student(1);
    student.a = 1;
    student.b = 1;
    GoodStudent copyStudent = student;
    copyStudent.printValue();

    return 0;
}

//void printStudent(Student *student) {
//    cout << student->name;
//}

