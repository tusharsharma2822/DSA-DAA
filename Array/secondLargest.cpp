#include<bits/stdc++.h>
using namespace std;

int secondLargest(int array[], int size){
    if(size < 2){
        return -1;
    }
    int large = INT_MIN;
    int secondLarge = INT_MIN;
    for(int i=0;i<size;i++){
        if(array[i] > large){
            secondLarge = large;
            large = array[i];
        }
        else if(array[i] > secondLarge && array[i] != large){
            secondLarge = array[i];
        }
    }
    return secondLarge;
}

int main(int argc, char const *argv[])
{
    int size;
    cout << "Enter the size of an array: ";
    cin >> size;

    int array[size];
    cout << "The elements of an array: ";
    for(int i=0;i<size;i++){
        cin >> array[i];
    }

    int result = secondLargest(array,size);

    cout << "The second Largest element in an array is: " << result << endl;

    return 0;
}
