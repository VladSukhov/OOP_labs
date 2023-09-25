#include <iostream>
#include "func.h"

using namespace std;

int main() 
{
    pair_of_ints p;
    cin >> p.first >> p.second;
    invalid_data(p);
    cout << func(p) << endl;
}