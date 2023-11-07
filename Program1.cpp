#include <iostream>
using namespace std;

int main() {
   string title, author, publisher;
   int year, pages, price;

   cout << "Enter book title:";
   getline (cin, title);
   cout << "Enter book author:";
   getline (cin, author);
   cout << "Enter book publisher:";
   getline (cin, publisher);
   cout << "Enter book year:";
   cin >> year;
   cout << "Enter book pages:";
   cin >> pages;
   cout << "Enter book price:";
   cin >> price;

   cout << title << "|" << author << "|" << publisher << "|" << year << "|" << pages << "|" << price;

    return 0;
}
