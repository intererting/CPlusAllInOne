//
// Created by yuliyang on 2019/1/4.
//

#include "Student.h"

Student::Student() {
    printf_s("Student Constructor \n");
}

void Student::printValue() {
    std::cout << a << std::endl;
    std::cout << b << std::endl;
    std::cout << c << std::endl;
}

Student::Student(int valueC) : c(valueC) {

}

void Student::sayHello() {
    std::cout << "student hello c extends" << std::endl;
}
