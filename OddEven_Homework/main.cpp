//
// Created by damya on 29.1.2024 г..
//
#include <iostream>
using namespace std;

int main(){

    int n;

    cout << "Please enter how many numbers u wanna input: " << endl;
    cin >> n;

    for (int i = 0; i < n; ++i) {
        int currentnum;
        cin >> currentnum;

        /// With ternary operator
        cout << (currentnum % 2== 0 ? "even":"odd") << endl;

        /// with If - > else stat3ment

//        if (currentnum % 2== 0){
//
//            cout << "even" << endl;
//        } else {
//            cout << "odd" <<endl;
//        }
    }



    return 0;
}