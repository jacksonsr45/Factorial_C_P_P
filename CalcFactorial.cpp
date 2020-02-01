#include <cstdio>
#include <cstdlib>
#include <iostream>

using namespace std;

#include "Header.h"

int calcfactorial(int inValue)
{
    int nCount = 1 ;
    for (int x = 1; x <= inValue; x++)
    {
        nCount *= x;
    }
    return nCount;
}