// Debug Program 2 

#include <iostream>
#include <string.h>

using namespace std;

// Base class
class Account
{public:
     Account()
    {
        cout << "Account created" << endl;
    }
public:
    int accNo;
    double balance;

public:
    Account(int a, double b)
    {
        accNo = a;
        balance = b;
    }

    void deposit(double amt)
    {
        balance = balance + amt;
    }

    void withdraw(double amt)
    {
        if (amt > balance)
            cout << "Insufficient Balance" << endl;
        else
            balance = balance - amt;
    }

    void display()
    {
        cout << "Account No: " << accNo << endl;
        cout << "Balance: " << balance << endl;
    }

    double getBalance()
    {
        return balance;
    }

    ~Account()
    {
        cout << "Account closed" << endl;
    }
};

// Derived class
class Savings : public Account
{
public:
    Savings()
    {
        cout << "Premium Savings Account created" << endl;
    }
public:
    double interestRate;

public:
    Savings(int a, double b, double r) : Account(a, b)
    {
        interestRate = r;
    }

    void addInterest()
    {
        double interest = getBalance() * interestRate / 100;
        deposit(interest);
    }
     ~Savings()
    {
        cout << " Savings Account closedd" << endl;
    }
};

// Another derived class
class PremiumSavings : public Savings
{
public:
    PremiumSavings()
    {
        cout << "Premium Savings Account created" << endl;
    }

    
private:
    int rewardPoints;

public:
    PremiumSavings(int a, double b, double r, int p)
        : Savings(a, b, r)
    {
        rewardPoints = p;
    }

    void showDetails()
    {
        display();
        cout << "Interest Rate: " << interestRate << endl;
        cout << "Reward Points: " << rewardPoints << endl;
    }
~PremiumSavings()
    {
        cout << "Premium Savings Account closed" << endl;
    }
};

// Friend function
class Bank;

class Auditor
{
public:
    void audit(Bank b);
};

class Bank
{
private:
    double totalFunds;

public:
    Bank()
    {
        totalFunds = 0;
    }

    void addFunds(double amt)
    {
        totalFunds += amt;
    }

    friend void Auditor::audit(Bank b);
};

void Auditor::audit(Bank b)
{
    cout << "Total Bank Funds: " << b.totalFunds << endl;
}

// Utility class
class Logger
{
public:
    static int logCount;

    void log(string msg)
    {
        cout << "LOG: " << msg << endl;
        logCount++;
    }
};

int Logger::logCount = 0;

int main()
{
    Savings s1(1001, 5000, 5);
    s1.deposit(1000);
    s1.addInterest();
    s1.display();

    PremiumSavings p1(2001, 10000, 7, 200);
    p1.showDetails();

    Logger l1;
    l1.log("Account Created");

    Logger l2;
    l2.log("Transaction Done");

    cout << "Total Logs: " << Logger::logCount << endl;

    Bank b1;
    b1.addFunds(50000);
    b1.addFunds(25000);

    Auditor a;
    a.audit(b1);

    s1.balance = 10000;

    void display();

    Account a1;

    PremiumSavings  p2;

    s1.deposit(500);

    cout << p1.interestRate << endl;

    s1.~Savings();

    return 0;
}
// Debug Program 2 bugs code was saved in py instead of c++,constructor and destructor were missing in derived class, friend function was not defined, static member variable was not initialized, negative deposit was allowed, and private member variable was accessed directly.
//variables were repeated for premimum savings and savings class, and base class constructor was not called in derived class constructor.
// missing semicolon after class definition, and missing function definition for display() in main. 