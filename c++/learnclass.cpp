#include <bits/stdc++.h>
using namespace std;

class user{
    public:
    // polymorphism  -> 
    //                 overloading -> compile time -> same method name diff parameters
    //                 overriding ->run time
    user(string name,string email,string password,int age){
        cout<<"object created"<< name << endl;
        this->username = name;
        this->email = email;
        this->password = password;
        this->age = age;
    }
    user(string name,string email){
        cout<<"object created"<< name << endl;
        this->username = name;
        this->email = email;
    }
    user(){
        cout<<" enter a name : ";
        cin>>this->username;
        cout<<" enter a email : ";
        cin>>this->email;
        cout<<" enter a password : ";
        cin>>this->password;
        cout<<" enter a age : ";
        cin>>this->age;
        this->showDetails();
    }

    public:
    string username;
    string password;
    string email;
    int age =0;

    public:
    void showDetails(){
        cout << "username : "<<this->username << endl;
        cout << "email : "<<this->email << endl;
        cout << "password : "<<this->password << endl;
        cout << "age : "<<this->age << endl;
    }
    public :
    void changeUsername(){
        cout << "enter a new username :";
        cin>>this->username;
        this->showDetails();
    }
};

int main(){
    int a = 10;

    user user1("ram","123@gmail.com","12345",23);
    // user1.email = "ram123@gmail.com";
    user user2("sam","sam123@gmail.com");
    // user2.email = "sam123@gmail.com";
    user1.showDetails();

    
    user2.showDetails();
    // user2.showDetails();
    user1.changeUsername();

    user user3;

    return 0;
}