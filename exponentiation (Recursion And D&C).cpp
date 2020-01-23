/*

Exponentiation using recursion and using Divide And Conquer approaches

*/
#include <bits/stdc++.h>

using namespace std;

int exp_iterative(int num, int exp){

    int result = num;

    for (int i = 0; i < exp - 1; i++)
        result *= num;

    return result;
}



int exp_recursive(int num, int exp){

    if (exp == 0)
        return 1;

    return num * exp_recursive(num, exp-1);

}

int exp_dc(int num, int exp){

    if(exp == 0)
        return 1;

    else if(exp % 2 == 0){
        int a = exp_dc(num,exp/2);
        return a*a;
    }

    else
        return num * exp_dc(num,exp-1);

}

int main()
{

    int num = 7;
    int exp = 3;

    cout<<exp_dc(num, exp);

    return 0;
}

