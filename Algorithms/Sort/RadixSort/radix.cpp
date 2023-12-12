#include <iostream>
using namespace std;

int getMax(int arr[], int size) {
    int max = arr[0];
    for (int i = 1; i < size; ++i)
        if (arr[i] > max)
            max = arr[i];
    return max;
}

void countSort(int arr[], int size, int exp) {
    int output[size];
    int count[10] = {0};

    for (int i = 0; i < size; i++)
        count[(arr[i] / exp) % 10]++;

    for (int i = 1; i < 10; ++i)
        count[i] += count[i - 1];

    for (int i = size - 1; i >= 0; i--) {
        output[count[(arr[i] / exp) % 10] - 1] = arr[i];
        count[(arr[i] / exp) % 10]--;
    }

    for (int i = 0; i < size; ++i)
        arr[i] = output[i];
}

void printArr(int arr[], int size)
{
    for(int i = 0; i< size; i++)
        cout << arr[i] << " ";
    cout << endl;
}

void radixSort(int arr[], int size) {
    int max = getMax(arr, size);
    for (int exp = 1; max / exp > 0; exp *= 10){
        countSort(arr, size, exp);
        printArr(arr, size);
    }
}

int main() {
    const int size = 10;
    int arr[size], i;

    for (i = 0; i < size; i++)
        cin >> arr[i];
    radixSort(arr, size);

    for (int i = 0; i < size; ++i)
        cout << arr[i] << " ";
    cout << endl;
    return 0;
}