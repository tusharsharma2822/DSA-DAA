#include<bits/stdc++.h>
using namespace std;

int removeDuplicates(int array[], int size){
    int i=0;
    for(int j=1;j<size;j++){
        if(array[i] != array[j]){
            array[i+1] = array[j];
            i++;
        }
    }
    return (i+1);
}

void printArray(int array[], int size){
    for(int i=0;i<size;i++){
        cout << array[i] << " ";
    }
}

int main(int argc, char const *argv[])
{
    int size;
    cout << "Enter the size of an array: ";
    cin >> size;

    int array[size];
    for(int i=0;i<size;i++){
        cin >> array[i];
    }

    cout << "The transformation of the array: " << removeDuplicates(array,size) << endl;

    return 0;
}
