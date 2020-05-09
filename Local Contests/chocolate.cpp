
/*

Solutions to local competitive programming competition:
https://upinitk.ba/wp-content/uploads/2019/4/Bilten-Informatika-2019.pdf

Chocolate Problem

*/

#include <iostream>
#include <string>


using namespace std;

int main()
{

    unsigned int r, s;
    int res[3];
    cin>>r>>s;

    for (int i = 0; i < 3; i++){

        int num;
        cin>>num;

        string curr;
        cin>>curr;

        if (curr == "redova"){
                res[i] = s*num;
                r-=num;
        } else{
                res[i] = r*num;
                s-=num;
        }







    }
     for (int i = 0; i < 3; i++)
            cout<< res[i] <<endl;

    return 0;
}
