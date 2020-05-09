
/*

Solutions to local competitive programming competition:
https://upinitk.ba/wp-content/uploads/2019/4/Bilten-Informatika-2019.pdf

Ants Problem

*/

#include <iostream>
#include <vector>
#include <string>
#include <iostream>
#include <utility>
#define UI unsigned int


using namespace std;

int main()
{

    UI len_r, len_l, st;
    string rs,ls;
    vector< pair<char,char> > ants;


    cin>>len_r>>len_l;
    cin>>rs>>ls;
    cin>>st;

    ants.resize(len_r+len_l);

    for (int i = 0; i < len_r+len_l; i++)
        if(i<len_r)
            ants[len_r-1-i] = make_pair(rs[i],'R');
        else
            ants[i]=make_pair(ls[i-len_r], 'L');

    for (int i = 0; i < st; i++)
        for (int k = 0; k < len_r+len_l-1; k++)
            if (ants[k].second == 'R' && ants[k+1].second == 'L'){
                pair<char,char> temp = ants[k];
                ants[k]=ants[k+1];
                ants[k+1]=temp;
                k++;
                continue;
            }










        for (int i = 0; i < len_r+len_l; i++)
            cout<<ants[i].first;







    return 0;
}
