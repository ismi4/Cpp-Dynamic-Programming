/*

The number, 197, is called a circular prime because all rotations of the digits: 197, 971, and 719, are themselves prime.

There are thirteen such primes below 100: 2, 3, 5, 7, 11, 13, 17, 31, 37, 71, 73, 79, and 97.

How many circular primes are there below one million?

*/

#include <bits/stdc++.h>

using namespace std;

bool isPrime(unsigned long long num);
bool isCircular(unsigned long long num);

int main()
{

    unsigned long long counter = 1;

    for (unsigned long long i = 3; i < 10e6; i+=2){

     if (isCircular(i))
        counter++;
        }


    printf("%d", counter);

    return 0;

}
bool isCircular (unsigned long long num){

    int numOfDigits = 0;
    unsigned long long tempNum = num;

    while(tempNum != 0){
        numOfDigits++;
        tempNum /= 10;
    }

    tempNum = num;

    while(isPrime(tempNum)){
        tempNum = (tempNum % 10) * pow(10, numOfDigits - 1) + tempNum / 10;

        if (tempNum == num)
            return true;
    }

    return false;
}

bool isPrime (unsigned long long num){

    for (unsigned long long i = (num - 1 ) ; i > 1; i--)
        if (num % i == 0)
        return false;

    return true;
}


