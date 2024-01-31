#include <iostream>
#include "Cinema.h"
#include "Screening.h"
#include "Hall.h"
#include "vector"
#include "MovieFinder.h"

int main() {
    Screening s1("Rambo 1", 20);
    Screening s2("Rambo 2", 30);

    vector<Screening> scr1;

    scr1.push_back(s1);
    scr1.push_back(s2);

    Hall h1("Hall 1", 70, scr1);
    Hall h2("Hall 2", 30, scr1);


    vector<Hall> halls;

    halls.push_back(h1);
    halls.push_back(h2);



    Cinema c1("Arena", "Mladost", halls);

    c1.print();

    string movieName;

    getline(cin, movieName);

    findMovie(halls, movieName);
    return 0;
//    Code without Variable

//    for(int i = 0; i < halls.size(); i++) { // is for halls
////        Hall h = halls.at(i); // current hall
////        vector<Screening> scr = halls.at(i).getScreeningList();  // projection in the current hall
//        for(int j = 0; j < halls.at(i).getScreeningList().size(); j++) {  // is for screening vector
////            Screening scrObj = halls.at(i).getScreeningList().at(j); // current projection
////            string currentMovieName = halls.at(i).getScreeningList().at(j).getMovieName();  // movie name from screening object
//
//            if (movieName == halls.at(i).getScreeningList().at(j).getMovieName()) {
//                cout << " We found projection " << halls.at(i).getScreeningList().at(j).getMovieName()  << endl;
//                halls.at(i).getScreeningList().at(j).print();
//                halls.at(i).print();
//            }
//        }
//    }
    return 0;
}



//Кино:
//Име
//адрес
//Списък със зали
//Зала:
//Име
//Брой места
//Списък с прожекции
//Прожекция:
//Име на филм
//Брой продадени билети
//
//
//Да се направят класовете описващи киното.
//В Кино да се реализират методи за:
//Добавяне на зала към списъка
//Търсене на прожекции за даден филм, по име на филма
//Коя прожекция е най-гледана в цялото кино (всички зали)
//Кой филм е бил най-гледан - трябва да се обходят всички прожекции за всеки филм и да се сумират постъпленията
//Коя зала е най-посещавана
//
//
//В Зала да има методи за:
//Добавяне на прожекция към списъка