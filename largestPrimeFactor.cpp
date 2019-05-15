/*

The prime factors of 13195 are 5, 7, 13 and 29.

What is the largest prime factor of the number 600851475143 ?

*/

#include <bits/stdc++.h>

using namespace std;

bool isPrime(long long num);

int main()
{

    long long num = 600851475143;
    long long product = 1;

    for (int i = 1; i < num; i++){

        if (isPrime(i) && (num % i) == 0 ){

            product *= i;

            if (product == num){
                printf("%d",i);
            }
        }

    }

    return 0;
}

bool isPrime (long long num){

for (long long i = (num - 1 ) ; i > 1; i--){

    if (num % i == 0){
        return false;
    }
}
    return true;
}
