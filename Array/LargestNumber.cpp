#include<bits/stdc++.h>
using namespace std;

// /*Brute Force*/
// int largestNumber(vector<int>& nums){
//     sort(nums.begin(),nums.end());
//     return nums[nums.size()-1];
// }

/*Optimal Solution*/
int largestNumber(vector<int>& nums){
    int largest = nums[0];
    for(int i=1;i<nums.size();i++){
        if(nums[i] > largest){
            largest = nums[i];
        }
    }
    return largest;
}

int main(int argc, char const *argv[])
{
    vector<int> nums = {8,6,3,1,5,4,9,2,7};
    cout << "The largest element in an array is: " << largestNumber(nums) << endl;
    return 0;
}
