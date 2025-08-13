#include <bits/stdc++.h>
using namespace std;

int main(){

    int num[3][3] = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };

for (auto& val : num ){
    for(auto v : val){
        cout << v << " ";
    }
}
cout<<"  "<<endl;
cout<<"normal loop "<<endl;


for (int i = 0; i < 3; i++)
{
    for (int j = 0; j < 3; j++)
    {
        cout << num[j][j];
    }
    
}

for (int i = 0; i < 5; i++)
{
    string s = "";
    for (int j = 0; j < 5; j++)
    {
        s+="*";
    }

    
    cout << s <<endl;
    
}

    
    return 1;

}
