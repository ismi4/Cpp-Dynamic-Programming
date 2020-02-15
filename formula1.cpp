
/*

Solutions to local competitive programming competition:
https://upinitk.ba/wp-content/uploads/2018/01/Bilten2016.pdf

Formula 1 Problem

*/

#include <iostream>
#include <vector>


using namespace std;

int main()
{

    vector<float> times;

     float current = -1;

    while (current != 0){
        cin>>current;
        times.push_back(current);
    }

    unsigned int b1, b2;

    cin>>b1>>b2;

    float b1_val = times.at(times.size() - b1);
    float b2_val = times.at(times.size() - b2);

    float diff = b2_val-b1_val;

    cout<<diff;

    return 0;
}
