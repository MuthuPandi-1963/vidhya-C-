#include <bits/stdc++.h>

using namespace std;
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int i = 0;
        int end = nums.size() - 1;

        while (i <= end) {
            if (nums[i] == val) {
                nums[i] = nums[end];  // Swap with the last valid element
                end--;                 // Reduce the considered array size
            } else {
                i++;                   // Move forward only if current is not val
            }
        }
        return end + 1;              // New length of the array
    }
    public:
    bool wordBreak(string s, vector<string>& wordDict) {
        
    }
};
int main(){
    int val =3;
    vector<int> vec = {3,2,2,3};
    vector<int> vec1 = {0,1,2,2,3,0,4,2};
    Solution sol;
    int res = sol.removeElement(vec,val);
    int res1 = sol.removeElement(vec1,2);
    cout << "ans  : " << res <<endl;
    cout << "ans  : " << res1 <<endl;
}

