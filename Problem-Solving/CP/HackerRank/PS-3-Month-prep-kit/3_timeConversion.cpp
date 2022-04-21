//not acc
#include<bits/stdc++.h>
using namespace std;

string decimal_to_string(int n)
{
    if(n == 0)
    {
        return "00";
    }
    string ss = "";
    int digit;
    int i = 1;
    while(n)
    {
        digit = n%10;
        char c_dig = (digit + '0');
        ss = c_dig + ss;
        n/=10;
        //cout<<i<<"."<<digit<<endl;
        i++;
    }
    //cout<<"from function: "<<ss<<endl;
    return ss;
}

string remove_length_error(string s)
{
    if(s.length() == 1)
        s = '0' + s;
    return s;
}
int main()
{
    string input, s_hour, s_minute, s_second, s_AMPM;
    cin>> input;
    s_hour = input[0];
    s_hour += input[1];// 07:05:19PM

    s_minute = input[3];
    s_minute += input[4];

    s_second = input[6];
    s_second += input[7];

    s_AMPM = input[8];
    s_AMPM += input[9];

    //cout<<s_hour<<" "<<s_minute<<" "<<s_second<<" "<<s_AMPM<<endl;

    stringstream sh(s_hour);
    int hour = 0;
    sh>>hour;

    stringstream sm(s_minute);
    int minute;
    sm>>minute;

    stringstream ss(s_second);
    int second;
    ss>>second;

    //printf("in decimal: %d %d %d\n",hour,minute, second);

    if(s_AMPM == "AM" && hour == 12) hour -=12;
    if(s_AMPM == "PM")
    {
        if(hour != 12)
            hour += 12;
    }

    //printf("in decimal: %d %d %d\n",hour,minute, second);

    string out_hour, out_minute, out_second, out_time;

    out_hour = decimal_to_string(hour);
    out_minute = decimal_to_string(minute);
    out_second = decimal_to_string(second);

    out_hour = remove_length_error(out_hour);
    out_minute = remove_length_error(out_minute);
    out_second = remove_length_error(out_second);

    out_time = out_hour+ ":" + out_minute + ":" + out_second;

    cout<<out_time<<endl;


    return 0;
}
