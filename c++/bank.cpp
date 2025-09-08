#include <bits/stdc++.h>
using namespace std;
class bank
{
public:
    static int counter;
    string name;
    string branch = "K.K.Nagar";
    string district = "Madurai";
    int age;
    string gender;
    string IFSC_code = "SBI12345SA08";

private:
    float balance;
    float amount;

public:
    int account_no;
    bank(string name, string branch, string district, int age, string gender, string IFSC_code, float balance)
    {
        cout<<"with parameters";
        counter++;
        this->account_no = counter;
        this->name = name;
        this->branch = branch;
        this->district = district;
        this->age = age;
        this->IFSC_code = IFSC_code;
        this->gender = gender;
    }
    bank()
    {
        counter++;
        cout<<"without parameters";
        this->account_no = counter;
        this->balance = 0;
    }

public:
    void checkbalance()
    {
        this->showdetails();
        cout << "balance: " << balance << endl;
    }
    void checkbalance(int pin)
    {
        this->showdetails();
        cout << "balance: " << balance << endl;
    }

public:
    void deposit(float amount)
    {
        if (amount > 0)
        {
            balance += amount;
            cout << "Deposit amount:" << amount << endl;
            this->checkbalance();
        }
        else
        {
            cout << "Invalid  transaction" << endl;
        }
    }

public:
    void withdraw(float amount)
    {
        if (amount > 0 && amount <= balance)
        {
            balance -= amount;
            cout << "Withdraw amount: " << amount << endl;
            this->checkbalance();
        }
        else
        {
            cout << "Invalid transaction" << endl;
        }
    }
    //  public:void transfer(float amount)
    // {

    //     if(amount>0 && amount<=balance)
    //     {
    //         balance-=amount;
    //         cout<<" Transfer amount: "<<amount<<"  "<<"balance amount: "<<balance<<endl;
    //     }
    //     else
    //     {
    //         cout<<"Invalid transaction"<<endl;
    //     }
    // }

public:
    void showdetails()
    {
        cout << "Accout name: " << this->counter << endl;
        cout << "Name: " << this->name << endl;
        cout << "Age: " << this->age << endl;
        cout << "branch: " << this->branch << endl;
        cout << "district: " << this->district << endl;
        cout << "gender: " << this->gender << endl;
        cout << "IFSC code: " << this->IFSC_code << endl;
    }

public:
    int recursion(bank s1)
    {
        int choice;
        cout << "1. deposit " << endl;
        cout << "2. withdraw " << endl;
        cout << "3. balance " << endl;
        cout << "4. Exit " << endl;
        cout << "Enter the your choice " << endl;
        cin >> choice;
        if (this->isCorrectChoice(choice))
        {
            if (choice == 1)
            {
                float depositAmount = 0;
                cout << "Enter your deposit amount:" << endl;
                cin >> depositAmount;
                s1.deposit(depositAmount);
            }
            if (choice == 2)
            {
                float withdrawAmount = 0;
                cout << "Enter your withdraw amount:" << endl;
                cin >> withdrawAmount;
                s1.withdraw(withdrawAmount);
            }
            if (choice == 3)
                s1.checkbalance();
            if (choice == 4)
                return 0;
            this->recursion(s1);
        }
        else
        {
            this->recursion(s1);
        }
        return 0;
    }

public:
    bool isCorrectChoice(int choice)
    {
        int choices[] = {1, 2, 3, 4};
        for (int i = 0; i < 4; i++)
        {
            if (choice == choices[i])
                return true;
        }
        return false;
    }

public:
    bank createaccount(bank b1)
    {
        cout << "Enter the name: ";
        cin >> b1.name;
        cout << "Enter your age: ";
        cin >> b1.age;
        cout << "Enter your gender: ";
        cin >> b1.gender;
        b1.showdetails();
        return b1;
    }
};

int bank::counter = 0;
int main()
{
    int key;
    while (true)
    {
        cout << "1. CREATE A ACCOUNT" << endl;
        cout << "2. EXIT" << endl;
        cout << "Enter the key: ";
        cin >> key;
        if (key == 1)
        {
            bank b1; // object creation 
            b1 = b1.createaccount(b1);
            b1.recursion(b1);
            break;
        }
        else if (key == 2)
        {
            break;
        }
    }
}