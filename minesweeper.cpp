
    /*


  Have you ever played Minesweeper? This cute little game comes with a certain operating
system whose name we cant remember. The goal of the game is to find where
all the mines are located within a M x N field.
The game shows a number in a square which tells you how many mines there are
adjacent to that square. Each square has at most eight adjacent squares. The 4x4 field
on the left contains two mines, each represented by a * character. If we represent the
same field by the hint numbers described above, we end up with the field on the right:
*...
....
.*..
....
*100
2210
1*10
1110
Input
The input will consist of an arbitrary number of fields. The first line of each field
contains two integers n and m (0 < n,m ≤ 100) which stand for the number of lines
and columns of the field, respectively. Each of the next n lines contains exactly m
characters, representing the field.
Safe squares are denoted by . and mine squares by *, both without the quotes.
The first field line where n = m = 0 represents the end of input and should not be
processed.
Output
For each field, print the message Field #x: on a line alone, where x stands for the
number of the field starting from 1. The next n lines should contain the field with the
. characters replaced by the number of mines adjacent to that square. There must
be an empty line between field outputs.


    */

    #include <bits/stdc++.h>
    #include <string>
    #include <sstream>

    using namespace std;

    int main()
    {

    unsigned short rows, columns;

    cin>>rows>>columns;
    cout<<endl;

    vector<string> lines;
    vector<string> printField;
    cin.sync();

    for (int i = 0; i < rows; i++){

        string current;
        getline(cin, current);
        lines.push_back(current);

    }



    for (int i = 0; i < rows; i++){

        string currentNew = "";

        for (int k = 0; k < columns; k++){


            char current = lines.at(i).at(k);


            if (current == '*')
                currentNew+="*";
             else {

                 unsigned int counter = 0;

                if (k + 1 < columns){
                    if (lines.at(i).at(k+1)== '*')
                        counter++;
                }

                if (k - 1 >= 0)
                    if (lines.at(i).at(k-1)=='*')
                        counter++;

                if (i-1 >= 0 && k+1 < columns)
                    if (lines.at(i-1).at(k+1))
                    counter++;

                if (i-1 >= 0 && k-1 >= 0)
                    if (lines.at(i-1).at(k-1))
                    counter++;

                if (i+1 < rows && k+1 < columns)
                    if (lines.at(i+1).at(k+1))
                    counter++;

                if (i+1 < rows && k-1 >= 0)
                    if (lines.at(i+1).at(k-1))
                    counter++;

                stringstream ss;
                ss << counter <<endl;

                string intToStr = ss.str();
                currentNew+=intToStr;



            }

        }


        printField.push_back(currentNew);
    }


    for(int i = 0; i < printField.size(); i++)
        cout<<printField.at(i)<<endl;




    }




