
/*

    Given an array of n numbers, calculate the maximum subarray
    sum - the largest possible sum of a sequence of consecutive values in the array.

            -1 2 4 -3 5 2 -5 2   = 10

*/

#include <bits/stdc++.h>

using namespace std;

int main()
{

    int arr[] = {-2, -5, 6, -2, -3, 1, 5, -6};

    int arrSize = sizeof(arr) / sizeof(arr[0]);
    int max = 0;


    for(int i = 0; i < arrSize; i++){

        for (int n = arrSize; n > i; n--){

        int sum = 0;

        for (int k = i; k < n; k++){
            sum += arr[k];
        }

        if (sum > max){
            max = sum;
        }
    }
}

    cout<<max;




    return 0;
}
