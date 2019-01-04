//
// Created by yuliyang on 2019/1/4.
//

#include "GoodStudent.h"

GoodStudent::GoodStudent(int value) : Student(value) {

}

GoodStudent::GoodStudent() {
    std::cout << "GoodStudent Constructor" << std::endl;
}

GoodStudent::~GoodStudent() {
    std::cout << "GoodStudent Delete" << std::endl;
}

GoodStudent::GoodStudent(const GoodStudent &obj) : Student(obj) {
    std::cout << "GoodStudent ¿½±´¹¹Ôìº¯Êý" << std::endl;
    a = obj.a;
    b = obj.b;
}

void GoodStudent::sayHello() {
    Student::sayHello();
    std::cout << "GoodStudent hello extends" << std::endl;
}

void GoodStudent::testAbstract() {
    std::cout << "testAbstract";
}