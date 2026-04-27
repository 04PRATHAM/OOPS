#include<iostream>
using namespace std;


class Time
{
  int hour,minute,second;
  public:
    void getTime(){
        cout<<"\nEnter hours:";cin>>hour;
        cout<<"enter minutes";cin>>minute;
        cout<<"enter seconds";cin>>second;
    }

    void printTime(){
        cout<<"\nhour:"<<hour;
        cout<<"\ttminute:"<<minute;
        cout<<"\tsecond:"<<second;
    }
    void addTime(Time x,Time y){
        this->hour=x.hour+y.hour;
        this->minute=x.minute+y.minute;
        this->second=x.second+y.second;

    }
};

int main()
{
    Time t1,t2,t3;
    t1.getTime();
    t1.printTime();


    t2.getTime();
    t2.printTime();

    t3.addTime(t1,t2);
    t3.printTime();
}