#include <bits/stdc++.h>
using namespace std;
namespace calc
{
    int add(int a , int b){
        return a+b;
    }
    int sub(int a , int b){
        return a-b;
    }
}
using namespace calc;
int main(){
    cout << "Hello world \n"<<endl;
    int ans1 = calc::add(20,15);
    int ans2 = add(10,15);
    cout<<"ans1 :"<<ans1 << endl;
    cout<<"ans2 :"<<ans2<<endl;

    cout << "sub of 20 - 10 = " << sub(20,10) <<endl;
    return 0;
}
