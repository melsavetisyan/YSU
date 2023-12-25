// 4. Տրված ամբողջ թվերի հաջորդականության համար արտածել "YES", եթե այն հանդիսանում է չնվազող հաջորդականություն և "NO" հակառակ դեպքում:

#include <iostream>
using namespace std;

bool chnvazox(int arr[], int size)
{
    int tmp = arr[0], i;
    for (i = 1; i < size; i++)
    {
        if(tmp > arr[i])
            return false;
        tmp = arr[i];
    }
    return true;
}

int main()
{
    const int size = 5;
    int arr[size], i;
    
    for(i = 0; i < size; i++)
        cin >> arr[i];
    cout << (chnvazox(arr, size) ? "YES" : "NO") << endl;
}