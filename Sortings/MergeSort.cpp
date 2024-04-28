#include<bits/stdc++.h>
using namespace std;

void merge(vector<int>& nums, int low, int mid, int high){
    vector<int> temp;
    int left = low;
    int right = mid + 1;

    while(left <= mid && right <= high){
        if(nums[left] <= nums[right]){
            temp.push_back(nums[left]);
            left++;
        }
        else{
            temp.push_back(nums[right]);
            right++;
        }
    }

    while(left <= mid){
        temp.push_back(nums[left]);
        left += 1;
    }

    while(right <= high){
        temp.push_back(nums[right]);
        right += 1;
    }

    for(int i=low;i<=high;i++){
        nums[i] = temp[i-low];
    }
}

void mergeSort(vector<int>& nums, int low, int high){
    if(low >= high){
        return;
    }
    else{
        int mid = low + (high - low)/2;
        mergeSort(nums,low,mid);
        mergeSort(nums,mid+1,high);
        merge(nums,low,mid,high);
    }
}

void printArray(vector<int>& nums){
    for(int i=0;i<nums.size();i++){
        cout << nums[i] << " ";
    }
    cout << endl;
}

int main(int argc, char const *argv[])
{
    vector<int> nums = {9,8,7,6,5,4,3,2,1,0};
    int size = 10;

    cout << "The Array before sorting is: ";
    printArray(nums);

    mergeSort(nums,0,size-1);

    cout << "The array after sorting is: ";
    printArray(nums);

    return 0;
}
