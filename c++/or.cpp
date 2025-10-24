#include <bits/stdc++.h>

using namespace std;

class Employee{
    public:
    virtual void  Welcome(){
        cout << "welcome to Class Employee \n";
    }
    public:
    virtual void Salary() = 0;
};
class Account : public Employee{
    void Greet(){
        cout << "greet to Class Accounts \n";
    }
    public:
    void Salary() override{
        cout<<"Salary";
    }
};
class HR : public Employee{
    public:
    void Greet(){
        cout << "greet to Class HR \n";
    }
    public:
    void Welcome() override{
        cout << "welcome to Class HR \n";
    }
    public:
    void Salary() override{
        cout<<"Salary";
    }
};
class Testing : public Employee{

};


int main(){
    Account emp;
    emp.Welcome();

    HR hr1;
    hr1.Welcome();


    Employee*  hr2 = new HR(); 
    cout<<"HR 2 \n";
    hr2->Welcome();

    Employee* test1 = new Testing();


    // HR emp2 = new Employee();
    return 0;
};

// https://chatgpt.com/share/68fb7044-cfc8-800c-a53e-1d659e7e8154