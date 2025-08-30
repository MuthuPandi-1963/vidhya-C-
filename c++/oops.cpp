#include <bits/stdc++.h>

using namespace std;

class Employee{
    public :static int counter;
    private:
    int id ;
    public :
    string name;
    string dept;
    string address;
    public :int age;
    private :double salary;
    public :
    Employee(){
        this->id = counter;
        counter++;
        cout << "Hello"<<endl;
        
    }
    Employee(string name,string ad,int age,string dept){
        this->name = name;
        this->address = ad;
        this->age = age;
        this->dept = dept;
        counter++;
        this->id = counter;
        this->setSalary(dept);
    }
    public :void showDetails(){
        cout <<"employee name : " << this->name <<endl;
    cout <<"employee age : " << this->age <<endl;
    cout <<"employee address : " << this->address <<endl;
    cout <<"employee dept : " << this->dept <<endl;
    cout <<"employee salary : " << this->salary <<endl;
    cout <<"employee id : " << this->id <<endl;
    }
    private : void setSalary ( string dept){
        if(dept == "IT"){
            this->salary =(int) 30000;
            return;
        }
        if(dept == "HR"){
            this->salary =(int) 20000;
            return;
        }
        if(dept == "QA"){
            this->salary = (int) 15000;
            return;
        }
        this->salary = 12000.00;
    }


};
int Employee::counter = 1000;
int main(){
    Employee emp1;
    cout << "Hello 1 \n";
    emp1.name = "Ram";
    emp1.age = 22;
    emp1.dept = "IT";
    // emp1.salary = 20000.00;
    // emp1.id = 1001;
    emp1.address = "Madurai";
    
    Employee emp2;
    emp2.name = "Sam";
    emp2.age = 25;
    emp2.dept = "HR";
    // emp2.salary = 30000.00;
    // emp2.id = 1002;
    emp2.address = "Chennai";

    emp1.showDetails();
    emp2.showDetails();
    

    Employee emp3("dinesh",
    "Theni",30,"IT");

    emp3.showDetails();
}