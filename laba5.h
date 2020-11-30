//_______________________________________________________________________________________________________________________________________________

#pragma once
#include<iostream>

using namespace std;


class  TimeConverter
{

private:


    int hour;
    int minutes;
    int seconds;



public:


    int Funk(int H, int M, int S)
    {
        int hour = H;
        int minutes = M;
        int seconds = S;
    }

    void inHour() {
        int H;
        cout << "enter hour" << endl;

        cin >> H;
        int h_out = H;


        cout << "enter minute" << endl;
        int M;
        cin >> M;
        int m_out = M;

        cout << "enter second" << endl;
        int S;
        cin >> S;
        int s_out = S;

        cout << H * 3600 + M * 60 + S << endl;
    }
    //void inMinute() {
    //  
    //}
    //void inSecond() {
    //  
    //}

    ///*int outHour() {
    //  int m_out;
    //  return (m_out * 60);
    // }*/


    //int Print(int h_out,
    //int s_out,
    //int m_out) {
    //  
    //  return (h_out * 3600) + (m_out * 60) + s_out;
    //}


    ~TimeConverter()
    {

    }


};