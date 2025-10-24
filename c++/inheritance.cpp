#include <bits/stdc++.h>
using namespace std;

// https://chatgpt.com/share/68e10e5f-fc58-800c-bbea-ca45fef50134

class Account{
    protected:
    string password;
    string otp;

    public:
    string name;
    string email;

    public:
    void Register(string name, string email ,string password){
        this->name = name;
        this->email = email;
        this->password = password;
    }
    public:
    void showUserInfo(){
        cout<<"name : "<<this->name << endl;
        cout<<"email : "<<this->email << endl;
    }
    
};

class NormalAccount  :public Account {
    public:
    bool subscribed = false;
    public :
    void watchMovies(){
        if(this->subscribed){
            cout<<"access all  movies "<<endl;
        }else{
            cout<<"access only limited movies "<<endl;
        }
    }
};

class PremiumAccount  : public Account{
    public:
    bool subscribed = true;
    public :
    void watchMovies(){
        if(this->subscribed){
            cout<<"access all  movies "<<endl;
        }else{
            cout<<"access only limited movies "<<endl;
        }
    }
    

};
class AdminAccount : public Account {
    public : 
    void editMovies(){
        cout << "admin can edit or delete movies"<<endl;
    }
};
int main(){

    Account ac1;

    NormalAccount user1;
    user1.Register("ram","ram123@gmail.com","12345678");
    user1.showUserInfo();
    user1.watchMovies();


    PremiumAccount user2;
    user2.Register("sam","sam123@gmail.com","12345678");
    user2.showUserInfo();
    user2.watchMovies();

    AdminAccount user3;
    user3.editMovies();

    return 0;
}





// parent class -> bank ->account details(properties ,balance) ->check bal , show account details,  
// child -3
// SA (deposit,withdrawal,create account) 5000,50000
// CA (deposit,withdrawal,create account) 0,30000
// VA (deposit,withdrawal,create account) 10000,2000000



