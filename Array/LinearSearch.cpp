#include<bits/stdc++.h>
using namespace std;

int LinearSearch(int array[], int size, int target){
    for(int i=0;i<size;i++){
        if(array[i] == target){
            return i;
        }
    }
    return -1;
}

int main(int argc, char const *argv[])
{
    int size;
    cout << "Enter the value of size of an array: ";
    cin >> size;

    int array[size];
    for(int i=0;i<size;i++){
        cin >> array[i];
    }

    int target;
    cout << "Enter the target value: ";
    cin >> target;

    cout << "The element present is at index: " << LinearSearch(array,size,target) << endl;
    
    return 0;
}
