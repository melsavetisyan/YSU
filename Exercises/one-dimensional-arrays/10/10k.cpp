#include <iostream>
using namespace std;

bool is_unique(int item, int arr[], int size){
    int count = 0;
    for(int i = 0; i < size; i++)
        if(arr[i] == item)
            count++;
    return count == 1;
}

int tarber_zuyg(int arr[], int size){
    int count = 0, i;

    for(i = 0; i < size; i++)
        if(arr[i] % 2 == 0)
            if(is_unique(arr[i], arr, size))
                count++;
    return count;
}

int main(){
    const int size = 10;
    int arr[size], i;

    for(i = 0; i < size; i++)
        cin >> arr[i];
    cout << tarber_zuyg(arr, size) << endl;

    return 0;
}