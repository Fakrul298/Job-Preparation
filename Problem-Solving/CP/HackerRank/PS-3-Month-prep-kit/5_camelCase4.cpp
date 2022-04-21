//acc
#include<bits/stdc++.h>
using namespace std;

string combine(string s, string combinedString, int n)
{
    for(int i = 5; i<n; i++)
    {
        if(s[i] == ' ')
        {
            i++;
            s[i] = toupper(s[i]);
        }
        combinedString += s[i];
    }
    return combinedString;
}
string split(string s, string splitedString, int n)
{
    for(int i = 5; i<n; i++)
    {
        if(s[i] == '(') break;
        if(s[i]>= 'A' && s[i]<= 'Z') splitedString += ' ';
        splitedString += tolower(s[i]);
    }
    return splitedString;
}
int main()
{
    string s;
    while(getline(cin,s))
    {
        s.erase(remove(s.begin(), s.end(), '\r'), s.end() );
        s.erase(remove(s.begin(), s.end(), '\t'), s.end() );
        s.erase(remove(s.begin(), s.end(), '\n'), s.end() );
        if(s[0] == 'C')//combine
        {
            string combinedString;
            int l = s.size();
            if(s[2] == 'C')//class
            {
                combinedString = toupper(s[4]);
                combinedString = combine(s,combinedString,l);

                combinedString.erase(remove(combinedString.begin(), combinedString.end(), '\r'), combinedString.end() );
                combinedString.erase(remove(combinedString.begin(), combinedString.end(), '\t'), combinedString.end() );
                combinedString.erase(remove(combinedString.begin(), combinedString.end(), '\n'), combinedString.end() );

                cout<<combinedString<<"\n";
            }
            else
            {
                if(s[2] == 'M')//method: () at last position
                {
                    combinedString = s[4];
                    combinedString = combine(s,combinedString,l);
                    combinedString += "()";

                    combinedString.erase(remove(combinedString.begin(), combinedString.end(), '\r'), combinedString.end() );
                    combinedString.erase(remove(combinedString.begin(), combinedString.end(), '\t'), combinedString.end() );
                    combinedString.erase(remove(combinedString.begin(), combinedString.end(), '\n'), combinedString.end() );

                    cout<<combinedString<<"\n";
                }
                else//variable
                {
                    combinedString = s[4];
                    combinedString = combine(s,combinedString,l);

                    combinedString.erase(remove(combinedString.begin(), combinedString.end(), '\r'), combinedString.end() );
                    combinedString.erase(remove(combinedString.begin(), combinedString.end(), '\t'), combinedString.end() );
                    combinedString.erase(remove(combinedString.begin(), combinedString.end(), '\n'), combinedString.end() );

                    cout<<combinedString<<"\n";
                }
            }
        }
        else//split
        {
            string splitedString;
            int l = s.size();
            if(s[2] == 'C')//class
            {
                splitedString = tolower(s[4]);
                splitedString = split(s,splitedString,l);

                splitedString.erase(remove(splitedString.begin(), splitedString.end(), '\r'), splitedString.end() );
                splitedString.erase(remove(splitedString.begin(), splitedString.end(), '\t'), splitedString.end() );
                splitedString.erase(remove(splitedString.begin(), splitedString.end(), '\n'), splitedString.end() );

                cout<<splitedString<<"\n";
            }
            else
            {
                if(s[2] == 'M')//method: () at last position
                {
                    splitedString = s[4];
                    splitedString = split(s,splitedString,l);

                    splitedString.erase(remove(splitedString.begin(), splitedString.end(), '\r'), splitedString.end() );
                    splitedString.erase(remove(splitedString.begin(), splitedString.end(), '\t'), splitedString.end() );
                    splitedString.erase(remove(splitedString.begin(), splitedString.end(), '\n'), splitedString.end() );


                    cout<<splitedString<<"\n";
                }
                else//variable
                {
                    splitedString = s[4];
                    splitedString = split(s,splitedString,l);

                    splitedString.erase(remove(splitedString.begin(), splitedString.end(), '\r'), splitedString.end() );
                    splitedString.erase(remove(splitedString.begin(), splitedString.end(), '\t'), splitedString.end() );
                    splitedString.erase(remove(splitedString.begin(), splitedString.end(), '\n'), splitedString.end() );


                    cout<<splitedString<<"\n";
                }
            }
        }
    }
    return 0;
}
