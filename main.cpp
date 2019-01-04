#include <iostream>
#include <ctime>
#include "GoodStudent.h"
#include "Student.h"
#include <fstream>

using namespace std;

//struct Student {
//    string name;
//    int age;
//};

//void printStudent(Student *student);


template<typename F, typename T>
inline F toIntValue(T a) {
    return atoi(a.c_str());
}

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

//    GoodStudent student(1);
//    student.a = 1;
//    student.b = 1;
//    GoodStudent copyStudent = student;
//    copyStudent.printValue();

//    getCValue(student);

//    student.sayHello();

//测试文件
//    ofstream writer;
//    writer.open("d:\\test.txt", ios::out);
//    writer.close();

//    ifstream reader;
//    reader.open("d:\\test.txt", ios::out);
//    string a;
//    reader >> a;
//    cout << a;
//    reader.close();
    string a = "33";
    cout << toIntValue<int, string>(a);

    return 0;
}

//class MyException : public std::exception {
//public:
//    const char *what() const noexcept override {
//        return exception::what();
//    }
//};

//void getCValue(Student student) {
//    cout << student.c << endl;
//
//}

//void printStudent(Student *student) {
//    cout << student->name;
//}

//class TestFather {
//    void mPrint(int a) {
//        this->mPrint((double) a);
//    }
//
//    void mPrint(double a) {
//
//    }
//};

