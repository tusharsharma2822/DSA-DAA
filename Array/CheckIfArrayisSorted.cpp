#include<bits/stdc++.h>
using namespace std;

bool isSorted(vector<int>& nums){
    for(int i=1;i<nums.size();i++){
        if(nums[i-1] > nums[i]){
            return false;
        }
    }
    return true;
}

int main(int argc, char const *argv[])
{
    vector<int> nums = {1,2,3,4,5,6,7,8,9};
    cout << "Check if the array is sorted: " << isSorted(nums) << endl;
    return 0;
}
