/*

A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is:
9009 = 91 × 99.

Find the largest palindrome made from the product of two 3-digit numbers.

*/
#include <bits/stdc++.h>

using namespace std;

bool isPalindrome(unsigned int num);

int main()
{

   unsigned int curPalindrome = 0;

   for (int i = 999; i >= 100; i--)
    for (int ii = 999; ii >= 100; ii--)
        if (isPalindrome(i*ii))
            if ((i*ii)>curPalindrome)
                curPalindrome = (i * ii);

    printf("%d", curPalindrome);

    return 0;
}

bool isPalindrome(unsigned int num){

    unsigned int rev = 0, digit, div, n = num;

    do {
         digit = num % 10;
         rev = (rev * 10) + digit;
         num = num / 10;
   } while(num != 0);

    if (n == rev)
        return true;
    else
        return false;

}

