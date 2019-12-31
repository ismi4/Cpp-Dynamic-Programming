
    /*

    Someone has attempted to censor my strings by replacing every vowel with a *, l*k* th*s.
    Luckily, I've been able to find the vowels that were removed.

    Given a censored string and a string of the censored vowels, return the original uncensored string.


    */

    #include <bits/stdc++.h>
    #include <string>

    using namespace std;

    int main()
    {

    string censored, censoredVowels, uncensored = "";
    unsigned short counter = 0;

     cout<<"Enter a censored string: "<<endl;
     getline(cin, censored);

     cout<<"Enter vowels: "<<endl;
     getline(cin, censoredVowels);

    for (int i = 0; i < censored.size(); ++i){

        if (censored.at(i) == '*'){
            uncensored += censoredVowels.at(counter);
            ++counter;
        } else {
            uncensored += censored.at(i);
        }

    }

    cout<<uncensored<<endl;

    }




