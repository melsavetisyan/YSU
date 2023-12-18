#include <iostream>
using namespace std;

int get_max(int arr[], int size){
    int i, max = arr[0];

    for(i = 0; i < size; i++)
        if(arr[i] > max)
            max = arr[i];
    return max;
}



int main(){
    const int size = 10;
    int arrA[size], arrB[size], kes_max, i, j = 0;
    
    for(i = 0; i < size; i++)
        cin >> arrA[i];

    kes_max = get_max(arrA, size) / 2;
    for(i = 0; i < size; i++)
        if(arrA[i] > kes_max){
            arrB[j++] = arrA[i];
            cout << arrA[i] << " ";
        }
    return 0;
}