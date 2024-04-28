#include<bits/stdc++.h>
using namespace std;

void selectionSort(int array[], int size){
    for(int i=0;i<size-1;i++){
        int minimum = i;
        for(int j=i+1;j<size;j++){
            if(array[j] < array[minimum]){
                minimum = j;
            }
        }
        int temp = array[minimum];
        array[minimum] = array[i];
        array[i] = temp;
    }
}

void printArray(int array[], int size){
    for(int i=0;i<size;i++){
        cout << array[i] << " ";
    }
    cout << endl;
}

int main(int argc, char const *argv[])
{
    int size;
    cout << "Enter the size of an array: ";
    cin >> size;

    int array[size];
    cout << "The elements in an array: ";
    for(int i=0;i<size;i++){
        cin >> array[i];
    }

    cout << "The elements of an array before sorting are: ";
    printArray(array,size);

    selectionSort(array,size);

    cout << "The elements of an array after sorting are: ";
    printArray(array,size);

    return 0;
}
