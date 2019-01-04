//
// Created by yuliyang on 2019/1/4.
//

#ifndef CPLUSALLINONE_GOODSTUDENT_H
#define CPLUSALLINONE_GOODSTUDENT_H

#include "Student.h"
#include <iostream>


class GoodStudent : public Student {

public:
    explicit GoodStudent(int value);

    GoodStudent();


    ~GoodStudent();

    GoodStudent(const GoodStudent &obj);

    void sayHello() override;

    void testAbstract() override;

};


#endif //CPLUSALLINONE_GOODSTUDENT_H
