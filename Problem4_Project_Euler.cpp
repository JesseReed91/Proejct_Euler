/*
Program Written by Jesse Reed for Project Euler
A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.

Find the largest palindrome made from the product of two 3-digit numbers.
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

bool isPalindrome(int);

int main()
{
    int product = 0;
    
    //loops through the products of all 3 digit numbers and checks if it's a palindrome and that it's greater than the product, if so it stores the value in product
    for (int i = 100; i <= 1000; i++) 
    {
        for (int j = 100; j < 1000; j++)
        {
            int num = i * j;
            if (num > product && isPalindrome(num) == true)
            {
                product = i * j;
            }
        }
    }
    
    cout << product << endl;
}


bool isPalindrome(int num)
{
    string palindrome = to_string(num); //converts the product to a string so the digits can be easily compared

    int left = 0; //start position of start of string
    int right = palindrome.length() - 1; //start position of end of the string

    while (left < right)
    {
        if (palindrome[left] != palindrome[right])
        {
            return false;
        }
        left++;
        right--;
    }
    return true;
 
}