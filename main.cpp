#include <cstdio>
#include <cstdlib>
#include <iostream>

using namespace std;

#include "Header.h"


int main(int nNumberOfArgs,char* pszArgs[])
{

    cout << "##########################################"<< endl;
    cout << "#   This program calculates factorials   #"<< endl;
    cout << "#             of user input              #"<< endl;
    cout << "#    Enter a negative  number to exit    #"<< endl;
    cout << "#       by jacksonsr45@gmail.com         #"<< endl;
    cout << "##########################################"<< endl;

    for(;;)
    {
        int n;

        cout << "Enter with a number: ";
        cin >> n;

        if (n < 0)
        {
            break;
        }
        

        int nFactorial = calcfactorial(n);

        cout << "Your number is " << n << " and the factorial is "
            << nFactorial << endl;
    }
    system("PAUSE");
    return 0;
}