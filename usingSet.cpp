
/*

Using sets in C++

*/

#include <bits/stdc++.h>

using namespace std;

int main()
{

    set<int> a;
    a.insert(1);
    a.insert(1);
    a.insert(3);
    a.insert(3);

    set<int>::iterator it = a.begin();

    for(; it != a.end(); it++){
        cout<<*it<<endl;
    }

    return 0;
}
