#include<bits/stdc++.h>
using namespace std;

void LeftArray(vector<int>& nums){
    int temp = nums[0];
    for(int i=1;i<nums.size();i++){
        nums[i-1] = nums[i];
    }
    nums[nums.size()-1] = temp;
}

void printArray(vector<int>& nums){
    for(int i=0;i<nums.size();i++){
        cout << nums[i] << " ";
    }
}

int main(int argc, char const *argv[])
{
    vector<int> nums = {1,2,3,4,5};
    LeftArray(nums);
    printArray(nums);
    return 0;
}
