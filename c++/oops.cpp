#include <bits/stdc++.h>

using namespace std;

class Employee{
    public:
    int id ;
    public :
    string name;
    string dept;
    string address;
    float salary;
    int age;

    public :void showDetails(){
        cout <<"employee name : " << this->name <<endl;
    cout <<"employee age : " << this->age <<endl;
    cout <<"employee address : " << this->address <<endl;
    cout <<"employee dept : " << this->dept <<endl;
    cout <<"employee salary : " << this->salary <<endl;
    cout <<"employee id : " << this->id <<endl;
    }


};
int main(){
    cout << "Hello \n";
    Employee emp1;
    emp1.name = "Ram";
    emp1.age = 22;
    emp1.dept = "IT";
    emp1.salary = 20000.00;
    emp1.id = 1001;
    emp1.address = "Madurai";
    
    Employee emp2;
    emp2.name = "Sam";
    emp2.age = 25;
    emp2.dept = "HR";
    emp2.salary = 30000.00;
    emp2.id = 1002;
    emp2.address = "Chennai";

    emp1.showDetails();
    emp2.showDetails();
    
}