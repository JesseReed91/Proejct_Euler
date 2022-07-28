/*
Program Written by Jesse Reed for Project Euler
The prime factors of 13195 are 5, 7, 13 and 29.

What is the largest prime factor of the number 600851475143?
*/

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <cmath>
#include <iomanip>
#include <ctime>
#include <cstdlib>
#include <stdlib.h>

using namespace std;

int main()
{
    long long int number = 2303030303478456;
    int factor = 2;

    //600851475143

    cout << number << endl;

    while (factor * factor < number)
    {
        while (number % factor == 0)
        {
            number /= factor;
            cout << number << endl;
        }

        factor++;
    }


    cout << number << endl;

}

    


