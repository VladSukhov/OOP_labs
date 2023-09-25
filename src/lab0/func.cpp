#include "func.h"

int func(pair_of_ints p) 
{
    int res;
    res = p.first * p.second - 1;
    return res;
}

int func_reverse(pair_of_ints p)
{
    int res;
    res = p.second * p.first - 1;
    return res;
}
