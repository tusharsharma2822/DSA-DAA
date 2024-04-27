#include<bits/stdc++.h>
using namespace std;

void LeftArraybyDplaces(vector<int>& nums, int d){
    vector<int> temp;
    for(int i=0;i<d;i++){
        temp.push_back(nums[i]);
    }
    for(int i=d;i<nums.size();i++){
        nums[i-d] = nums[i];
    }
    for(int i=0;i<nums.size();i++){
        nums[i] = temp[i];
    }

}

void printArray(vector<int>& nums){
    for(int i=0;i<nums.size();i++){
        cout << nums[i] <<  " ";
    }
}

int main(int argc, char const *argv[])
{
    vector<int> nums = {1,2,3,4,5,6,7,8,9};
    LeftArraybyDplaces(nums,2);
    printArray(nums);
    return 0;
}
