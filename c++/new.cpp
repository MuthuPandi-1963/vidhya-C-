#include <bits/stdc++.h>

using namespace std;


namespace calc{
    int add(int a , int b){
        return a+b;
    }
    int sub(int a , int b){
        return a-b;
    }
}
using namespace calc;
int main(){
    cout << "Hello world"<<endl ;
    cout << "Hello world" <<endl;

    // cout<<"add of a and b " << calc ::add(10,20) <<endl;
    // cout<<"sum of 10 and 20 " << calc ::sub(10,20) <<endl;
      cout<<"add of a and b " << add(10,20) <<endl;
    cout<<"sum of 10 and 20 " << sub(10,20) <<endl;
    return 1;
}

