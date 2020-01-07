/*

Insertion sort

*/
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int arr[] = {1, 3, 2, 8, 2, 5, 9, 6};
    int arrL = sizeof(arr)/sizeof(arr[1]);

    int i, value, index;

    for (i=1; i < arrL; ++i){

        value = arr[i];
        index = i;

        while(index > 0 && arr[index-1] > value){
            arr[index] = arr[index-1];
            index--;
        }

        arr[index] = value;

    }

    for (int i = 0; i < arrL; i++)
        cout<<arr[i]<<" ";

    return 0;
}

