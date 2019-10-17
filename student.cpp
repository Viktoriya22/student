#include "student.h"
#include <iostream>
#include <string.h>
using namespace std;

Student::Student() : Human() {
	group = new char [10];
	strcpy(group, "IZ-51");
}

Student::Student(char *n,int r, int v, char *g) : Human(n,r,v) {
	group = new char [10];
	strcpy(group, g);
}
void Student::say() {
	cout << "Privet, ya student!" << endl;
	cout << "\tName: " << name << endl;
	cout << "\tRost: " << rost << endl;
	cout << "\tVes: " << ves << endl;
	cout << "\tGroup: " <<  group << endl;
}
