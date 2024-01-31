//
// Created by damya on 29.1.2024 г..
//

#ifndef TASKSUMOFVECTORS_SUMOFVECTORS_H
#define TASKSUMOFVECTORS_SUMOFVECTORS_H

#endif //TASKSUMOFVECTORS_SUMOFVECTORS_H
#include <iostream>
#include <vector>
#include <string>

using namespace std;

const vector<string> operator +(const vector<string>& vec1, const vector<string>& vec2 ){

    vector<string>vecToReturn;

    for (int i = 0; i < vec1.size(); i++) {
        string numberToPush=vec1[i] + " " + vec2[i];
        vecToReturn.push_back(numberToPush);

    }

    return vecToReturn;
}



void PrintSum( const vector<string>& vecResult )
{
    for( int i = 0; i < vecResult.size(); i++ )
    {
        cout << vecResult[i] << endl;
    }
}
