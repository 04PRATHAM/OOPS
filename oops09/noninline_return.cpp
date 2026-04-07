#include<iostream>
using namespace std;


class Time
{public:
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

    Time addTime(Time x,Time y);
    
};

Time addTime(Time x,Time y){
      Time z;
        z.hour=x.hour+y.hour;
        z.minute=x.minute+y.minute;
        z.second=x.second+y.second;

        return z;
    }

int main()
{
    Time t1,t2,y;
    t1.getTime();
    t1.printTime();


    t2.getTime();
    t2.printTime();

    y.addTime(t1,t2);
   cout<<"after adding:"<<endl;
    y.printTime();

}