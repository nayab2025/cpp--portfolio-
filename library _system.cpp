#include <iostream>
#include <vector>
#include <fstream>
using namespace std;

class Book {
public:
    string title, author;
    int id;

    void input() {
        cout << "ID: ";
        cin >> id;
        cin.ignore(); // to ignore leftover newline character
        cout << "Title: ";
        getline(cin, title);
        cout << "Author: ";
        getline(cin, author);
    }

    void save() {
        ofstream out("books.txt", ios::app);
        if (out.is_open()) {
            out << id << "," << title << "," << author << "\n";
            out.close();
        } else {
            cout << "Unable to open file!";
        }
    }
};

int main() {
    Book b;
    b.input();
    b.save();
    cout << "✅ Book saved successfully!" << endl;
    return 0;
}
