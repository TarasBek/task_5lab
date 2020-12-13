#pragma once
#include<iostream>
using namespace std;

class  timeConverter
{
private:
       
    int hour;
    int minutes;
    int seconds;

public:

    int setTime(int Hour, int Minute, int Seconds)
    {
        int hour = Hour ;
        int minutes = Minute;
        int seconds = Seconds;
    }

    void putTime() {
        cout << "enter hour" << endl;
        cin >> hour;

        cout << "enter minute" << endl;
        cin >> minutes;
        
        cout << "enter second" << endl;
        cin >> seconds;
    }
    
    void outputConvertedTime()
    {
        cout << hour * 3600 + minutes * 60 + seconds << endl;
    }

    ~timeConverter() {}
};