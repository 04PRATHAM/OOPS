#include<iostream>
using namespace std;

class A
{
    public:
    int a;
    private:
    int privateVar; // private member, not accessible in class B or main function
    protected:
    int protectedVar=100; // protected member, accessible in class B but not in main function
    public:
    void display()
    {
        cout<<"Base class A"<<endl;
        cout <<"value of a: "<<a <<endl; // a is visible in class A
        cout <<"value of privateVar: "<<privateVar <<endl; // privateVar is visible in class A
        cout <<"value of protectedVar: "<<protectedVar <<endl; // protectedVar is visible in class A
    }
};

class B:public A
{
    public:
    int b;
    private:
    int privateVarB = 30; // private member of class B, initialized at declaration
    protected:
    int protectedVarB =protectedVar; // protected member of class B, not accessible in main function
    
    public:
    void display()
    {
        cout<<"Derived class B"<<endl;
        cout <<"value of a: "<<a <<endl; // a is visible in class B
        cout <<"value of protectedVar: "<<protectedVar <<endl; // protectedVar is visible in class B
        cout <<"value of b: "<<b <<endl; // b is visible in class B
         cout <<"value of privateVarB: "<<privateVarB <<endl; // privateVarB is visible in class B
        cout <<"value of protectedVarB: "<<protectedVarB <<endl; // protectedVarB is visible in class B 
        cout<<"value of protectedVarA: "<<protectedVar <<endl; // protectedVar is visible in class B    
    }
};

int main()
{     
    A objA; // object of class A
    objA.a = 5; // a is accessible in main function through object of class A
    // objA.privateVar = 15; // error: privateVar is not accessible in main function
    // objA.protectedVar = 25; // error: protectedVar is not accessible in main function
    objA.display(); // calls display function of class A
    B obj;      
    obj.a = 10; // a is accessible in main function through object of class B
    obj.display(); // calls display function of class B
    return 0;
}