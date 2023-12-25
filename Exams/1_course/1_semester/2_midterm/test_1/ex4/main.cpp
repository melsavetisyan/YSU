// 4. Տրված ամբողջ թվերի հաջորդականության համար արտածել "YES" եթե այն հանդիսանում է սիմետրիկ հաջորդականություն և "NO" հակառակ դեպքում:

#include <iostream>
using namespace std;

bool is_simetric(int arr[], int size)
{
    int last_index = size - 1;
    for (int i = 0; i <= size / 2; i++)
        if(arr[i] != arr[last_index - i])
            return false;
    return true;
}

int main()
{
    const int size = 4;
    int arr[size], i;
    
    for (i = 0; i < size; i++) 
        cin >> arr[i];
    cout << (is_simetric(arr, size) ? "YES" : "NO") << endl;
}