#include <bits/stdc++.h>

using namespace std;

int main(){
    int num[] = {1,2,3,4,5};

    cout << "nums 4th element " << num[4] <<endl;
    cout << "nums 2th element " << num[2] <<endl;
    cout << "nums 3th element " << num[3] <<endl;
    cout << "nums 1th element " << num[1] <<endl;
    cout << "nums 5th element " << num[5] <<endl;

    num[5] = 100;

    for(auto it : num){
        cout << it << " ";
    }
    cout << endl;

    vector<int> arr ;
    // for(int i = 0; i<10; i++){
    //     cout << "enter a " << i << " index value : ";
    //     int ans ;
    //     cin >> ans;
    //     arr.push_back(ans);
    // }

    for(auto it : arr){
        cout << it << " ";
    }

    cout <<"nums array "<<endl;
    vector<int> nums = {1,2,3,4,5,6,7,8}; 
    cout << "size of nums : " << nums.size();  
    // op : 1,4,9,16,25,36,49,64
    nums[2] = 100;
    for(auto it : nums) cout<< it << " ";

    return 1;

}