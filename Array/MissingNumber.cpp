#include<bits/stdc++.h>
using namespace std;

int missingNumber(vector<int>& nums){
    int n = nums.size();
    int sum1 = (n*(n+1))/2;

    int sum2 = 0;
    for(int i=0;i<nums.size();i++){
        sum2 += nums[i];
    }

    return sum1 - sum2;
}

int main(int argc, char const *argv[])
{
    vector<int> nums = {1,2,3,5};
    cout << "The missing number in an array is: " << missingNumber(nums) << endl;
    return 0;
}
