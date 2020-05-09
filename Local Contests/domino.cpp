
/*

Solutions to local competitive programming competition:
https://upinitk.ba/wp-content/uploads/2019/4/Bilten-Informatika-2019.pdf

Domino Problem

*/

#include <iostream>


using namespace std;

int main()
{
    unsigned int n, sum = 0;
    cin>>n;

    for (int i = 0 ; i <= n; i++)
        for (int k = 0; k <= i; k++)
            sum+=(i + k);

   cout<<sum;

    return 0;
}
