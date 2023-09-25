#include <iostream>
#include "func.h"

using namespace std;

bool invalid_data(pair_of_ints p)
{
    if (p.first <= 0 || p.second <= 0)
    {
        throw out_of_range("Incorrect values entered");
    }
}