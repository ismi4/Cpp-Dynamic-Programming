
/*

Vasya has a pile, that consists of some number of stones. n times he either took one stone from the pile or added one
stone to the pile. The pile was non-empty before each operation of taking one stone from the pile.

You are given n operations which Vasya has made.
Find the minimal possible number of stones that can be in the pile after making these operations.

Input
The first line contains one positive integer n — the number of operations, that have been made by Vasya (1≤n≤100).

The next line contains the string s, consisting of n symbols, equal to "-" (without quotes) or "+" (without quotes).
If Vasya took the stone on i-th operation, si is equal to "-" (without quotes),
if added, si is equal to "+" (without quotes).

Output
Print one integer — the minimal possible number of stones that can be in the pile after these n operations.

*/

#include <bits/stdc++.h>

using namespace std;

int main()
{

unsigned int n = 5;
string s = "++-++";
int num;

    int i = 0;

    while(true){

        if (i == n)
            break;

        if (s.at(i) == '-')
            i++;
         else
            break;
    }

    num = i;

    for (int i = 0; i < n; i++)
        if (s.at(i) == '+')
            num+=1;
        else
            num-=1;

    if (num <= 0)
        cout<<0;
    else
        cout<<num;


    return 0;
}
