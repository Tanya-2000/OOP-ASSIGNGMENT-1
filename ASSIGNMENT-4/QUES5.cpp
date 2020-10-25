#include<iostream>
using namespace std;
class Parent1{
    public:
    Parent1()
    {
        cout<<"Base class constructor-1";
    }
    ~Parent1()
    {
        cout<<"Base class Destructor -1";
    }
};
class Parent2{
    public:
    Parent2()
    {
        cout<<"Base class constructor -2"<<endl;
    }
     ~Parent2()
    {
        cout<<"Base class Destructor -2"<<endl;
    }
};
class child : public Parent1 ,Parent2{
    public:
    child()
    {
        cout<<"Derived class constructor"<<endl;
    }
      ~child()
    {
        cout<<"Derived class Destructor"<<endl;
    }
};
    int main()
    {
        child c;
    }
