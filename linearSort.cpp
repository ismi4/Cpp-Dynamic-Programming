/*

Linear sort

*/
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int arr[] = {1, 3, 2, 8, 2, 5, 9, 6};
    int arrL = sizeof(arr)/sizeof(arr[1]);

    vector<int> nums;

    for (int i = 0; i < arrL; i++){
        nums.push_back(arr[i]);
    }

    for(int i = 0; i < nums.size(); i++){
        for (int k = (i+1); k < nums.size(); k++){
            if (nums.at(i) > nums.at(k)){
                int temp = nums[i];
                nums.at(i) = nums.at(k);
                nums.at(k) = temp;
            }
        }
    }

    for(int i = 0; i < arrL; i++){
        cout<<nums.at(i)<<" ";
    }

    return 0;
}

