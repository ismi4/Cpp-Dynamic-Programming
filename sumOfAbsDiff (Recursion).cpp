/*

Sum of all absolute differences of values in array

*/

#include <bits/stdc++.h>

using namespace std;

//Iterative approach
/*int absDiffOfArrElements(int arr1[], int arr2[], int length){

    unsigned int sum = 0;

    for (int i = 0; i < length; i++)
        sum+= abs(arr1[i] - arr2[i]);

        return sum;


}*/

//Recursive approach
int absDiffOfArrElements_DispathcerFunc(int arr1[], int arr2[], int length){

    if (length == 0)
        return 0;

    int lastElementDiff = abs(arr1[length-1] - arr2[length-1]);
    int diff = absDiffOfArrElements_DispathcerFunc(arr1, arr2, length-1) + lastElementDiff;

    return diff;

}

int main()
{

    int arr1[] = {2,1,3};
    int arr2[] = {5,2,1};
    unsigned int length = (sizeof(arr1)/sizeof(*arr1));

    cout<<absDiffOfArrElements_DispathcerFunc(arr1, arr2, length);

    return 0;
}
