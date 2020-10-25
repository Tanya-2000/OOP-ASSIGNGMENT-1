#include<iostream>
using namespace std;

class Student{
private:
  string Name;
  int age;
  string Course;
public:
  Student(string Name,int age,string Course){
    cout<<"I am a Student";
    this->Name=Name;
    this->age=age;
    this->Course=Course;
  }
};
class undergraduateStudent:virtual public Student{
  undergraduateStudent(){
    cout<<"I am an under graduate Student";
  }
};
class graduateStudent:virtual public Student{
  graduateStudent(){
    cout<<"I am an graduate Student";
  }
};
class freshMan:virtual public undergraduateStudent{
  freshMan(){
    cout<<"I am fresher";
  }
};
class junior:virtual public undergraduateStudent{
  junior(){
    cout<<"I am junior";
  }
};
class senior:virtual public undergraduateStudent{
  senior(){
    cout<<"I am senior";
  }
};
class doctralStudent:virtual public graduateStudent{
  doctralStudent(){
    cout<<"I am doctral Student";
  }
};
class mastersStudent:virtual public graduateStudent{
  mastersStudent(){
    cout<<"I am master Student";
  }
};
