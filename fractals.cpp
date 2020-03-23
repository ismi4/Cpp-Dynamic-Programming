
/*

Fractals

*/

#include <iostream>

using namespace std;

int main()
{

    unsigned int n = 43;
    bool yes = false;

    for (int i = 7; i <= 2000; i = (2 * i + 5))
        if (n == i)
            yes = true;

    if (!yes){
        cout<<"Greska"<<endl;
        return 0;
    }

    char arr[n][n];

    //for n=7, basic drawing
    char seven[7][7] = {{'.', '.','.','.', '.','.','.'},
                        {'.', '+','-','+', '-','+','.'},
                        {'.', '|','.','|', '.','|','.'},
                        {'.', '+','-','+', '-','+','.'},
                        {'.', '|','.','|', '.','|','.'},
                        {'.', '+','-','+', '-','+','.'},
                        {'.', '.','.','.', '.','.','.'}};

                       for (int i = 0; i < n; i++)
        for(int k = 0; k < n; k++)
           arr[i][k]='*';

    //draw base
    for(int i = 0; i < n; i++){
        arr[0][i]='.';
        arr[1][i]='.';
        arr[n-1][i]='.';
        arr[n-2][i]='.';

        arr[i][0]='.';
        arr[i][1]='.';
        arr[i][n-1]='.';
        arr[i][n-2]='.';

    }


    for (int i = 0; i < n; i++){

        if(i==1 || (i-1)%8==0 || i == (n-2))
            arr[i][1]='+';
        else if(i!=0 && i!=n-1)
            arr[i][1]='|';



        if(i==1 || (i-1)%8==0 || i == (n-2))
            arr[i][n-2]='+';
        else if(i!=0 && i!=n-1)
            arr[i][n-2]='|';




    }

    //rows
    for (int i = 0; i < n; i++)
        //columns
        for (int k = 0; k < n; k++)
                 if(k!=0 && k!=n-1 && arr[i][k]!='+'&&(i==1 || i==n-2 || (i-1)%8==0))
                    arr[i][k]='-';

    for(int i = 0; i < n; i++)
        for(int k = 0; k < n; k++)
            if ((k==1 && i==0) || (i==1 && (k-1)%8==0) || ((i-1)%8==0&&(k-1)%8==0))
                arr[i][k]='+';
            else if((k==1 && i!=0 && i!=2 && arr[i][k]!='+') || ((k-1)%8==1 && i!=0 && i!=n-1 && arr[i][k]!='+'))
                arr[i][k]='|';

    //Prepisivanje

    /*int kvadrata = (n-3)/8;
    int red=2;

    for(int i = 0; i < kvadrata*kvadrata; i++){

    int kolona=2;



        for(int k=0; k < kvadrata; k++){

            for (int j=red, m=0; m < 7; j++, m++)
                for (int l=kolona, q=0; q < 7; l++, q++)
                    arr[j][l]=seven[m][q];






                kolona+=8;
        }


if ((i+1)%3 == 0)
        red+=8;


    }
*/

    for (int i = 0; i < n; i++){
        for(int k = 0; k < n; k++)
            cout<<(char)arr[i][k];
    cout<<endl;
    }



    return 0;
}
