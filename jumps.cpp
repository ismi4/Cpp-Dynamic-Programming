
/*

Solutions to local competitive programming competition:
https://upinitk.ba/wp-content/uploads/2018/01/Bilten2016.pdf

Jumps Problem

*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{

   unsigned int cPoint, distance;
    int points[5];
   int total = 0;

   cin>>cPoint>>distance;

   for (int i = 0; i < 5; i++)
        cin>>(points[i]);

    sort(points, points + 5);

    for (int i = 0; i < 3; i++)
        total+=points[i+1];

    if (distance == cPoint)
        total+=60;
    else if (distance > cPoint)
        total+=(60-(distance-cPoint)*2);
    else
        total+=(60+(distance-cPoint)*2);

    cout<<total;

    return 0;
}
