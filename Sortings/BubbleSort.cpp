#include<bits/stdc++.h>
using namespace std;

void bubbleSort(int array[], int size){
    for(int i=size-1;i>=0;i--){
        for(int j=0;j<=i-1;j++){
            if(array[j] > array[j+1]){
                int temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
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

    bubbleSort(array,size);

    cout << "The elements of an array after sorting are: ";
    printArray(array,size);

    return 0;
}
