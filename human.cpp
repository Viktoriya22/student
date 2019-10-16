#include "human.h"
#include <string.h>
#include <iostream>
using namespace std;
Human::Human()
{
    name = new char [10];
    strcpy(name, "Vika");
    rost = 170;
    ves = 70;
}

Human::Human(char *n , int r, int v)
{
    name = new char [10];
    strcpy(name, n);
    rost = r;
    ves = v;
}
void Human:: say(){
    cout <<"Privet, ya Human" << endl;
    cout <<"\tName:" <<name << endl;
    cout <<"\tRost:" <<rost << endl;
    cout <<"\tVes:" << ves << endl;

}
