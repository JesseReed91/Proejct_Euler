/*
Program Written by Jesse Reed for Project Euler
If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.

Find the sum of all the multiples of 3 or 5 below 1000.
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

int num = 1000;

int main()
{
    int accumulator = 0;
    for (int i = 1; i < num; i++)
    {

        if (i % 3 == 0 || i % 5 == 0) //checks to see if the number is divisible by 3 or 5 without a remainder
        {
            accumulator += i;
        }
    }

    cout << accumulator << endl;

}