#include "Student.h"
#include <iostream>
#include<cstring>
using namespace std;

// Assign studentId and name
void Student::assignDetails(int id, char sname[]) {
  studentid=id;
  strcpy(name,sname);

}

// Display StudentId and Name
void Student::display() {
  cout<<"Student id = "<<studentid<<endl;
  cout<<"Name = "<<name<<endl;

}
