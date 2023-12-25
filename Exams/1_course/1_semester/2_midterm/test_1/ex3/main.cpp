// 3. Տրված բնական թվերի համար արտածել այն թվերը, որոնք հանդիսանում են իրենց աջ հարևանի (վերջինի դեպքում առաջինի) որևէ ամբողջ աստիճան:

#include <iostream>
using namespace std;

int pow(int num, int deg)
{
    int result = 1;

    while (deg--)
        result *= num;
    return result;
}

bool is_astichan(int num1, int num2)
{
    int i = 1;
    while (pow(num1, i) < num2)
        i++;
    return pow(num1, i) == num2;
}

int main()
{
    const int size = 5;
    int arr[size], i;

    for (i = 0; i < size; i++)
        cin >> arr[i];

    for (i = 0; i < size; i++)    
        if (i != size - 1)
            if (is_astichan(arr[i], arr[i+1]))
                cout << arr[i] << " ";
        else
            if (is_astichan(arr[i], arr[1]))
                cout << arr[i] << endl;    
    return 0;
}