//2. Գրել ծրագիր, որը տրված n բնակն թվի համար վերադարձնում է 1-ից n թվերի քառակուսիների գումարը:

#include <iostream>
using namespace std;

int main()
{
    int sum = 0, n, i = 0;
    cin >> n;

    while (++i <= n) sum += i * i;
    
    cout << sum;

    return 0; 
}