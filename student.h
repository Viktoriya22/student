#ifndef STUDENT_H
#define STUDENT_H
#include "human.h"

class Student : public Human {
public:
	Student();
	Student(char*,int,int,char*);
	void say();
	char *group;
};

#endif
