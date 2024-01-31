//
// Created by damya on 31.1.2024 г..
//
#include "Book.h"
#include "Member.h"
int main(){
    // I am using vector, although in task says to make at least two obj. of each class and to use arrays -> arrays are static and would work if we know the precise number of our elements
    // so i use vectors cuz they can change during running the program.

    vector<Book* > booksList;
    vector<Member* > memberList;

    // We create two obj of book and push them in the vectors

    Book b1("Harry Potter", "J.K.", "1");
    Book b2("Mist", "K.L.", "2");

    booksList.push_back(&b1);
    booksList.push_back(&b2);

    // displaying info for each book
    for (Book *book : booksList){
        book->display();
        cout<< "-----------" << endl;
    }

    cout << endl;

    // We create two obj of class Member and push them in the vectors

    Member m1("Ivan", 31, "01");
    Member m2("Pesho", 23, "02");

    memberList.push_back(&m1);
    memberList.push_back(&m2);

    // displaying info for each member
    for (Member *member : memberList){
        member->display();
        cout<< "-----------" << endl;
    }

    // Implementing the logic for member borrowing a book
    m1.borrowBook(&b1);
    m2.borrowBook(&b2);




    // Implementing the logic for a book which is already taken
    m1.borrowBook(&b1);


    cout << endl;




    return 0;
}