
    /*

    Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.


    */

    #include <bits/stdc++.h>

    using namespace std;

    int main()
    {

        int n = 100;

        unsigned long sumOfTheSquares = 0;
        unsigned long squareOfTheSum = 0;

        for (int i = 1; i <= n; i++){

            sumOfTheSquares += i * i;
            squareOfTheSum += i;

        }

        squareOfTheSum *= squareOfTheSum;

        long difference = sumOfTheSquares - squareOfTheSum;

        cout<<"Square Of The Sum: "<<squareOfTheSum<<endl;
        cout<<"Sum of the squares: "<<sumOfTheSquares<<endl;


        cout<<"Difference between the sum of the squares and the square of the sum: "<<difference<<endl;


    }




