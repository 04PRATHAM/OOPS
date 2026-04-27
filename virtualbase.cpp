#include<iostream>
using namespace std;

class A
{
    public:
    int i;
};

class B: virtual public A
{
    public:
    int j;
};

class C:  public virtual A
{
    public:
    int k;
};

class D: public B, public C
{
    public:
    int sum;
    
};

int main()
{
    D obj;
    obj.i = 10; // i is accessible in class D through virtual inheritance
    obj.j = 20; // j is accessible in class D through class B
    obj.k = 30; // k is accessible in class D through class C
    obj.sum = obj.i + obj.j + obj.k; // sum is calculated using i, j, and k
    cout<<"Value of i: "<<obj.i<<endl; // Output: Value of i: 10
    cout<<"Value of j: "<<obj.j<<endl; // Output: Value of j: 20
    cout<<"Value of k: "<<obj.k<<endl; // Output: Value of k: 30
    cout<<"Sum of i, j, and k: "<<obj.sum<<endl; // Output: Sum of i, j, and k: 60
    return 0;
}