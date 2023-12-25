// 3. Տրված ամբողջ թվերի հաջորդականության համար արտածել նրանց ամենամեծ ընդհանուր բաժանարարը: Երկու թվերի ամենամեծ ընդհանուր բաժանարարը հաշվել ֆունկցիայի միջոցով:

#include <iostream>
using namespace std;

int gcd(int a, int b)
{
    return (a == 0) ? b : gcd(b % a, a);
}

int gcdOfArray(int arr[], int size)
{
    int result = arr[0];
    for (int i = 1; i < size; i++)
    {
        result = gcd(result, arr[i]);
        if (result == 1)
            break;
    }
    return result;
}

int main()
{
    const int size = 10;
    int arr[size], i;

    for (i = 0; i < size; i++)
        cin >> arr[i];
    cout << gcdOfArray(arr, size) << endl;

    return 0;
}