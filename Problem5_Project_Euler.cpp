/*
Program Written by Jesse Reed for Project Euler
2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.

What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?
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


int const minDivisor = 2;
int const maxDivisor = 20;

int main()
{
    int divisor = 1;
    long long int i;
    
    for (i = 1; ; i++)
    {
        for (int j = minDivisor; j <= maxDivisor; j++)
        {
            if (i % j == 0)
            {
                divisor++;
            }

        }

        if (divisor == 20)
        {
            cout << i << endl;
            break;
        }
        else
        {
            divisor = 1;
        }
    }
}