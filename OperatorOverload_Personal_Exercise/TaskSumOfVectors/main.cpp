//
// Created by damya on 29.1.2024 г..
//
#include "SumOfVectors.h"
#include <iostream>
#include <string>
#include <vector>
using namespace std;



int main(){

    int sizeOfVectors;

    cin >> sizeOfVectors;

    vector<string> vec1;
    vector<string> vec2;

    for (int i = 0; i < sizeOfVectors; ++i) {
        string strToPush;
        cin >> strToPush;
        vec1.push_back(strToPush);
    }


    for (int i = 0; i < sizeOfVectors; ++i) {
        string strToPush;
        cin >> strToPush;
        vec2.push_back(strToPush);
    }


    vector<string> vec3 = vec1 +  vec2;

    PrintSum(vec3);

    return 0;
}