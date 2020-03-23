
/*

Get all numbers from file which are surrounded by blank spaces

Reading and writing to files, converting string to number

*/

#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <ctype.h>

using namespace std;

int main()
{

    ifstream inFile;
    inFile.open("filter_in.txt");

    ofstream ouFile;
    ouFile.open("filter_out.txt");

    if (inFile.fail() || ouFile.fail())
        return 1;

    string s, ns, line;
    int n;

    getline(inFile, ns);
    getline(inFile, s);

    istringstream is = istringstream(ns);

    is>>n;

    //n = stoi(ns);

   stringstream data(s);

    while(getline(data, line, ' ')){

        bool test = true;

            for (int i = 0; i < line.length(); i++)
                if (!(isdigit(line.at(i)))){
                    test = false;
                    break;
                }

            if (test && line.at(0) == '0' && line.length() != 1){
                    line.erase(0,1);
            }

        if (test)
          ouFile<<line<<endl;

    }

    return 0;
}
