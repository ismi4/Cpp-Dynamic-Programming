
    /*

    Does string a contains string b?


    */

    #include <bits/stdc++.h>


    using namespace std;

    int main()
    {

    string a, b;

    cout<<"Enter first string: ";
    getline(cin, a);

    cout<<"Enter second string: ";
    getline(cin, b);

    int index = a.find(b);

    if (index != -1)
        cout<<"The string a contains string b at index: "<<index<<endl;


    }




