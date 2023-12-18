#include <iostream>
using namespace std;

void shellSort(int arr[], int n)
{
    int gap, temp, i, j;
    for (gap = n / 2; gap > 0; gap /= 2)
        for (i = gap; i < n; i++) 
        {
            temp = arr[i];
            for (j = i; j >= gap && arr[j - gap] > temp; j -= gap)
                arr[j] = arr[j - gap];
            arr[j] = temp;
        }
}
int main(){
    const int size = 10;
    int arr[size], i;

    for (i = 0; i < size; i++)
        cin >> arr[i];
    shellSort(arr, size);
    for (i = 0; i < size; i++)
        cout << arr[i] << " ";
    return 0;
}
