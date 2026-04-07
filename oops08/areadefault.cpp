
//area depending on input with default values

#include<iostream>
using namespace std;

int area(int length=5,int breadth=4);

int main()
{
    int length, breadth;

    cout<<"Enter length (enter 0 to use default): ";
    cin>>length;

    cout<<"Enter breadth (enter 0 to use default): ";
    cin>>breadth;

    if(length==0 && breadth==0)
        cout<<"area: "<<area()<<endl;
    else
        cout<<"area: "<<area(length,breadth)<<endl;
}

int area(int length,int breadth)
{
    return length*breadth;
}






