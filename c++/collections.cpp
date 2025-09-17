// #include <bits/stdc++.h>

// using namespace std;

// int main(){
//     int num[] = {1,2,3,4,5};

//     cout << "nums 4th element " << num[4] <<endl;
//     cout << "nums 2th element " << num[2] <<endl;
//     cout << "nums 3th element " << num[3] <<endl;
//     cout << "nums 1th element " << num[1] <<endl;
//     cout << "nums 5th element " << num[5] <<endl;

//     num[5] = 100;

//     for(auto it : num){
//         cout << it << " ";
//     }
//     cout << endl;

//     vector<int> arr ;
//     // for(int i = 0; i<10; i++){
//     //     cout << "enter a " << i << " index value : ";
//     //     int ans ;
//     //     cin >> ans;
//     //     arr.push_back(ans);
//     // }

//     for(auto it : arr){
//         cout << it << " ";
//     }

//     cout <<"nums array "<<endl;
//     vector<int> nums = {1,2,3,4,5,6,7,8}; 
//     cout << "size of nums : " << nums.size();  
//     // op : 1,4,9,16,25,36,49,64
//     nums[2] = 100;
//     for(auto it : nums) cout<< it << " ";

//     return 1;

// }


// // key - > value
// /// 1 -> 10
// // 2->10
// // 1 -> 20



#include <bits/stdc++.h>
using namespace std;

int main(){

    map<char,int> mappingChar;
    mappingChar.insert({'a',2});
    mappingChar.insert({'b',1});
    mappingChar.insert({'c',3});
    mappingChar['d'] = 5;
    mappingChar['b'] = 10;

    cout << "Map size : " << mappingChar.size() << endl;
    cout << "Map key  : b ,value : " << mappingChar['b'] << endl;

    // for (int i = 0; i < mappingChar.size(); i++)
    // {
    //     /* code */
    // }

    string str1 = "hello"; // h :1 , e :1 , l:2 , o :1
    // a : 3 , b:4 , c:1, d:2

    // username : "ram123"


    // [100,60,80,90,95]
    // tamil : 100 , english : 60 , math : 80 
    
    string str = "abbcaabbdd";
    map<char,int> findFre;

    for(int i = 0;i<str.size();i++){
        // cout << str[i] << " ";
        if(findFre [str[i]] != 0){
            findFre[ str[i] ] = findFre[ str[i] ] + 10;

        }else{
            cout <<"first occurrence : "<< str[i]  <<endl;
            findFre[ str[i] ] = 1;
        }

        // findFre[ str[i] ]++;
        // findFre[ str[i] ] = findFre[ str[i] ] + 1;
        // ans a : 21 , b: 31 , c :1 , d :11
        //30 3 33 21
        // 40 4 34 31
    }
    cout << endl;
    for (auto it = findFre.begin(); it != findFre.end(); ++it){
        cout << "findFre key : "<< it->first << ", value : "<<it->second <<endl;
    }    
    
    return 0 ;
}