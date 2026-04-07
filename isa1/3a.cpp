#include<iostream>
using namespace std;

class demo
{
    int x;
public:
    int substitute(int a)
    {
        x=a;
        return x;
    }
void show()
{
    cout<<"Value of x is "<<x<<endl;
}
};

int main ()
{
    demo d;
    d.substitute(10);
    d.show();   
    return 0;
}