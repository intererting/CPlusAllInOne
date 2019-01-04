//
// Created by yuliyang on 2019/1/4.
//

#ifndef CPLUSALLINONE_STUDENT_H
#define CPLUSALLINONE_STUDENT_H

#include <iostream>

class Student {

public:
    int a;
    int b;

private:
    int c;

public:
    Student();

    explicit Student(int valueC);

    void printValue();
};


#endif //CPLUSALLINONE_STUDENT_H
