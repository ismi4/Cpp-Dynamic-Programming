
/*

Spiral Problem

*/

#include <iostream>


using namespace std;

int main()
{

   unsigned int n, k, kvadrata, num=0;
   int arr[n][n];

   if (n%2==0)
    kvadrata = n / 2;
   else
    kvadrata = (n / 2)+1;

   //ide kroz kvadrate
   for (int i = 0; i < n/2; i++){

        //-> G

        int red, kol;

        for (kol = i, red=i; kol < n-i; kol++){
            arr[red][kol]=num;
            num++;
            if (num==k)
                num=0;
        }

        red++;

        for(;kol)



   }




    return 0;
}
