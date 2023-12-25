// 2. Գրել անդրադարձ ֆունկցիա, որը տրված բնական թվի համար վերադարձնում է այդ թվի թվանշանների քանակը:
#include <iostream>
using namespace std;

unsigned rec_len(unsigned n)
{
    return (n < 10) ? 1 : 1 + rec_len(n / 10);
}