/*

What is the 10 001st prime number?

*/

#include <bits/stdc++.h>

using namespace std;

int main()
{

    unsigned int counter = 0;
    unsigned long num = 3;
    unsigned int primePos = 10001;

   while(true){

        bool isPrime = true;

        for (unsigned long i = num - 1; i > 1; --i)
            if (num % i == 0){
                isPrime = false;
                break;
            }

        if (isPrime){

            counter++;

            if (counter == primePos){
                cout << num;
                break;
            }

            num+=2;

        }

   }

    return 0;

}

