#include<bits/stdc++.h>
using namespace std;

void insertionSort(int array[], int size){
    for(int i=0;i<=size-1;i++){
        int j = i;
        while(j > 0 && array[j-1] > array[j]){
            int temp = array[j-1];
            array[j-1] = array[j];
            array[j] = temp;
            j--;
        }
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

    insertionSort(array,size);

    cout << "The elements of an array after sorting are: ";
    printArray(array,size);

    return 0;
}
