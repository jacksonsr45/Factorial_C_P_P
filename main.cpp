#include <cstdio>
#include <cstdlib>
#include <iostream>

using namespace std;

#include "Header.h"


int main(int nNumberOfArgs,char* pszArgs[])
{

    cout << "This program calculates factorials"
         << "of user input"
         << "Enter a negative number to exit" << endl;

    for(;;)
    {
        int nValue;

        cout << "ENTER WITH A NUMBER:";
        cin >> nValue;

        if (nValue < 0)
        {
            break;
        }
        

        int nFactorial = factorial(nValue);

        cout << nValue << "factorial is "
            << nFactorial << endl;
    }
    system("PAUSE");
    return 0;
}