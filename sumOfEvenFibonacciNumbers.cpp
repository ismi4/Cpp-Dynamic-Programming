/*

Each new term in the Fibonacci sequence is generated by adding the previous two terms.
By starting with 1 and 2, the first 10 terms will be:

1, 2, 3, 5, 8, 13, 21, 34, 55, 89, ...

By considering the terms in the Fibonacci sequence whose values do not exceed four million,
find the sum of the even-valued terms.

*/
#include <bits/stdc++.h>

using namespace std;

int main()
{
    unsigned int last = 0;
    unsigned int current = 1;
    unsigned int sum = 0;

    while (current < 4e6){

    unsigned int temp = last + current;

    if (temp % 2 == 0)
        sum += temp;

    last = current;
    current = temp;

    }

    printf("%d", sum);

    return 0;
}
